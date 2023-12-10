#include<iostream>
#include<map>
#include<fstream>
#include<cstdlib>
#include<vector>
using namespace std;

#define MIN_BALANCE 500

class Account
{
	private:
	long AccountNumber;
	string FirstName,LastName;
	float Balance;
	static long NextAccountNumber;
	public:
	//constructors
	Account(){};
	Account(string fname,string lastName,float balance);
	
	//Accessors
	long	GetAccountNumber()	{return AccountNumber;}
	string	GetFirstName()	{return FirstName;}
	string	GetLastName()	{return LastName;}
	float	GetBalance()	{return Balance;}
	
	//Mutators
	void Deposit(float amount);
	void Withdraw(float amount);
	
	static void SetLastAccountNumber(long accnum);
	static long GetLastAccountNumber();
	
	//I/O operators
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
	long 	BalanceEnquiry(long accnum);
	void 	Deposit(long accnum,float amount);
	void 	Withdraw(long accnum,float amount);
	void	CloseAccount(long accnum);
	void 	ShowAllAccounts();
	~Bank();

};




int main()
{
string fname,lname;
long amount,balance;

Bank b;
Account acc;

cout<<"First Name: ";
cin>>fname;
cout<<"Last Name: ";
cin>>lname;
cout<<"Balance: ";
cin>>fname;

b.OpenAccount(fname,lname,balance);



return 0;
}



Bank::Bank()
{
	
	Account account;
	ifstream infile;

	infile.open("Bank.data",ios::in);
	if(!infile)
	return;
	
	
	while(!infile.eof())
	{
	
		infile>>account;
		accounts.insert(pair<long,Account>(account.AccountNumber(),account));
	}
	
	Account::SetLastAccountNumber(account.GetAccountNumber());
	infile.close();
}

Account Bank::	OpenAccount(string fname, string lname, float balance)
{
ofstream outfile;
Account acc(fname,lname,balance);

return acc;
}

Account:: Account(string fname,string lname,float balance)
{
	NextAccountNumber++;
	AccountNumber = NextAccountNumber;
	FirstName = fname;
	LastName = lname;
	Balance = balance;
}

void 	Account:: Deposit(float amount)
{
	Balance+=amount;
}

void	Account:: Withdraw(float amount)
{
	if(Balance-amount >  MIN_BALANCE)
	Balance-=amount;
}

Account Bank:: BalanceEnquiry(long accountnumber)
{
	map<long,Account>::iterator itr=accounts.find(accnum);
	return itr->second;
}

void	Account:: SetLastAccountNumber(long accnum)
{
	NextAccountNumber = accnum; 
}

long	Account:: GetLastAccountNumber()
{
	return NextAccountNumber; 
}

ofstream& operator<<(ofstream &ofs,Account &acc)
{
	ofs<<acc.AccountNumber;
	ofs<<acc.FirstName;
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
	os<<"Last Name:\t"<<acc.GetFirstName()<<endl;
	os<<"Balance:\t"<<acc.GetFirstName()<<endl;
	os<<"Account Number:\t"<<acc.GetAccountNumber()<<endl;
	
	return os;
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
	{
	outfile<<itr->second;
	cout<<"Acc No"<<GetAccountNumber();
	outfile.close();
}
