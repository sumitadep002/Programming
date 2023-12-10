#include <iostream>
#include<map>
#include<fstream>
#include<vector>
#include<cstdlib>

using namespace std;

#define MIN_BALANCE 500

class Bank;
class Account
{
	private:
	long AccountNumber;
	string FirstName,LastName;
	float Balance;
	static long NextAccountNumber;
	
	public:
	//constructors
	Account(){}
	Account(string fname,string lname,float balance);
	
	//Accessors
	long GetAccountNumber(){return AccountNumber;}
	string GetFirstName()	{return FirstName;}
	string GetLastName()	{return LastName;}
	float	GetBalance()	{return Balance;}
	
	void Deposit(float amount);
	void Withdraw(float amount);
	static void SetLastAccountNumber(long accnum);
	static long GetLastAccountNumber();
	
	//IO operations
	friend ofstream&	operator<<(ofstream &ofs,Account &acc);
	friend ifstream&	operator>>(ifstream &ifs,Account &acc);
	friend ostream&	operator<<(ostream &os,Account &acc);
};

long Account::NextAccountNumber = 0;

class Bank
{
	private:
	
	map<long,Account>accounts;
	
	public:
	
	Bank();
	Account OpenAccount(string fname, string lname, float balance);
	Account BalanceEnquiry(long accnum);
	Account Deposit(long accnum,float amount);
	Account Withdraw(long accnum,float amount);
	void	CloseAccount(long accnum);
	void 	ShowAllAccounts();
	~Bank();

};

int main()
{

	Bank b;
	Account acc;

	string fname,lname;
	float amount,balance;

	cout<<"Enter the First Name:";
    	cin>>fname;
    	cout<<"Enter the Last Name:";
    	cin>>lname;
    	cout<<"Enter the Initial Balance:";
    	cin>>balance;
    
    	acc = b.OpenAccount(fname,lname,balance);
	cout<<acc;
	return 0;
}


//constructors
Account:: Account(string fname,string lname,float balance)
{
	NextAccountNumber++;
	AccountNumber = NextAccountNumber;
	FirstName = fname;
	LastName = lname;
	Balance = balance;
}
	
void Account:: Deposit(float amount)
{
	Balance+=amount;
}
	
void Account:: Withdraw(float amount)
{
	if(Balance-amount>MIN_BALANCE)
	Balance-=amount;
}
void Account:: SetLastAccountNumber(long accnum)
{
	NextAccountNumber = accnum;
	
}

long Account:: GetLastAccountNumber()
{
return NextAccountNumber;
}



ofstream& operator<<(ofstream &ofs,Account &acc)
{
	//store the account onfo in customer account
    ofs<<acc.AccountNumber<<endl;
    ofs<<acc.FirstName<<endl;
    ofs<<acc.LastName<<endl;
    ofs<<acc.Balance;
    
    return ofs;
}

ifstream& operator>>(ifstream &ifs,Account &acc)
{
	ifs>>acc.AccountNumber;
	ifs>>acc.FirstName;
	ifs>>acc.Balance;
	return ifs;	
}
ostream& operator<<(ostream &os,Account &acc)
{
	os<<"First Name:\t"<<acc.GetFirstName()<<endl;
	os<<"Last Name:\t"<<acc.GetLastName()<<endl;
	os<<"Balance:\t"<<acc.GetBalance()<<endl;
	os<<"Account Number:\t"<<acc.GetAccountNumber()<<endl;
	
	return os;
}



Bank::Bank()
{
	Account account;
	ifstream infile;
	
	infile.open("Bank.data",ios::in);
	perror("ERROR");
	
	while(!infile.eof())
	{
		cout<<"Retrieving the data from the file\n";
		infile>>account;
		accounts.insert(pair<long,Account>(account.GetAccountNumber(),account));
	}
	
	Account::SetLastAccountNumber(account.GetAccountNumber());
	infile.close();
}

Account Bank::	OpenAccount(string fname, string lname, float balance)
{
	
	ofstream outfile;
   	Account account(fname,lname,balance);
	accounts.insert(pair<long,Account>(account.GetAccountNumber(),account));
	
	outfile.open("Bank.data",ios::out);
	
	map<long,Account>::iterator itr;
	
    for(itr=accounts.begin();itr!=accounts.end();itr++)
        outfile<<itr->second; 
    	outfile.close();
    
 
    return account;
}

Account Bank:: Deposit(long accnum,float amount)
{
	map<long,Account>::iterator itr=accounts.find(accnum);
	itr->second.Deposit(amount);
	return itr->second;	
}

Account Bank:: Withdraw(long accnum,float amount)
{
	map<long,Account>::iterator itr=accounts.find(accnum);
	itr->second.Withdraw(amount);
	return itr->second;	
}

Account Bank:: BalanceEnquiry(long accountnumber)
{
	map<long,Account>::iterator itr=accounts.find(accountnumber);
    	return itr->second;
}

void Bank:: CloseAccount(long accnum)
{
	map<long,Account>::iterator itr;
	itr=accounts.find(accnum);
	
	cout<<"Account Deleted"<<itr->second;
	
	accounts.erase(accnum);
	

}

void Bank:: ShowAllAccounts()
{
	map<long,Account>::iterator itr;
	
	for(itr=accounts.begin();itr!=accounts.end();itr++)
	cout<<"Account "<<itr->first<<endl<<itr->second<<endl;
}

Bank::~Bank()
{
	ofstream outfile;
	//open and clean the file
	outfile.open("Bank.data",ios::trunc);
	map<long,Account>::iterator itr;
	//now write content of every account object created till now using containers
	for(itr=accounts.begin();itr!=accounts.end();itr++)
	outfile<<itr->second;
	outfile.close();
}


