#include <iostream>
#include<map>
#include<fstream>
#include<vector>
#include<cstdlib>

//ifstream to read from teh files and ofstream to write into the file


using namespace std;
//minimum balance shoud be 500
#define MIN_BALANCE 500
class InsufficientFunds{};

class Account{
    private:
    //data variable declaration
    long accountNumber;
    string FirstName;
    string LastName;
    float balance;
    static long NextAccountNumber;
    public:
    //method declaration
    Account(){}
    
    //return the account infos
    Account(string fname,string lname,float balance);
    long  getAccNo(){return accountNumber;}
    string getFirstName(){return FirstName;}
    string getLastName(){return LastName;}
    float getBalance(){return balance;}
	
	//mutators
    void Deposit(float amount);
    void Withdraw(float amount);
    static void setLastAccountNumber(long accountNumber);
    static long getLastAccountNumber();
    
    //to write into the file
    friend ofstream& operator<<(ofstream &ofs,Account &acc);
    //to read from the file
    friend ifstream& operator>>(ifstream &ifs, Account &acc);
    
    //print the file data onto the output console
    friend ostream& operator<<(ostream &os,Account &acc);
};

//will be uesd to keep updating the account numbers
long Account::NextAccountNumber=0;

class Bank{
    private:
    //map container will help to tranverse through each account by it's account number
    map<long,Account>accounts;
    
    public:
    
    Bank();
    Account OpenAccount(string fname,string lname, float balance);
    Account BalanceEnquiry(long AccountNumber);
    Account Deposit(long AccpuntNumber, float amount);
    Account Withdraw(long AccountNumber, float amount);
    void CloseAccount(long AccountNumber);
    void ShowAllAccounts();
    ~Bank();
};
int main(void)
{
    // take the user choice for transaction
    char choice;
    Bank b;
    Account acc;
    string fname,lname;
    long accountNumber;
    float balance;
    float amount;
    
    cout<<"Enter the First Name:";
    cin>>fname;
    cout<<"Enter the Last Name:";
    cin>>lname;
    cout<<"Enter the Initial Balance:";
    cin>>balance;
    
    acc = b.OpenAccount(fname,lname,balance);

        

    return 0;
}


Account::Account(string fname,string lname,float balance)
{
	//increase the counter whenever new account is created
    NextAccountNumber++;
    //assign the account number to the variable
    accountNumber = NextAccountNumber;
    //set the names
    FirstName=fname;
    LastName=lname;
    //store the balance
    this->balance=balance;
}

void Account::Deposit(float amount)
{
	//store new amount in account
    balance+=amount;
}
void Account::Withdraw(float amount)
{
	//allow withdrawal if and only minimum balance is reserved in account
    if(balance-amount,MIN_BALANCE)
    throw InsufficientFunds();
    balance-=amount;
}
void Account::setLastAccountNumber(long accnum)
{
    NextAccountNumber = accnum;
}

long Account::getLastAccountNumber()
{
	//return the next account number
    return NextAccountNumber;
}
ofstream& operator<<(ofstream &ofs,Account &acc)
{
	//store the account onfo in customer account
    ofs<<acc.accountNumber<<endl;
    ofs<<acc.FirstName<<endl;
    ofs<<acc.LastName<<endl;
    ofs<<acc.balance;
    
    return ofs;
}

ifstream& operator>>(ifstream & ifs, Account &acc)
{
	//store the account info from the file to the member variable of the class
    ifs>>acc.accountNumber;
    ifs>>acc.FirstName;
    ifs>>acc.LastName;
    ifs>>acc.balance;
    return ifs;
}

//print the output on the terminal
ostream& operator<<(ostream &os, Account &acc)
{
	//print the account info on the terminal screen
    os<<"First Name: "<<acc.getFirstName()<<endl;
    os<<"Last Name: "<<acc.getLastAccountNumber()<<endl;
    os<<"Account Number: "<<acc.getAccNo()<<endl;
    os<<"Balance: "<<acc.getBalance()<<endl;
    return os;
}

//will simply initiates the new bank account
Bank::Bank()
{
	//Create an account
    Account account;
    //create an ifstream objet to write into the file
    ifstream infile;
    //open the the new file with Bank.data name
    infile.open("Bank.data");
    //check for whether file opened successfull or not
    if(!infile)
    {
        return ;
    }
    
    //get to the recently created account
    while(!infile.eof())
    {
        infile>>account;
        accounts.insert(pair<long,Account>(account.getAccNo(), account));

    }
	//set the account number
    Account::setLastAccountNumber(account.getAccNo());
    infile.close();
}

//open new account and return the Account
Account Bank::OpenAccount(string fname,string lname,float balance)
{
    ofstream outfile;
    //set the value using the parameterised constructor
    Account account(fname,lname,balance);
    //insert the pair of account number and account
    accounts.insert(pair<long,Account>(account.getAccNo(),account));
    //store the info in Bank.data
    outfile.open("Bank.data",ios::trunc);
    //declare the iterator by itr name
    map<long,Account>::iterator itr;
    for(itr==accounts.begin();itr!=accounts.end();itr++)
    {
    //in map first element is key and second element is value
    //the second element in out case is account
    //inshort we are writing the account information in the Bank.data file
        outfile<<itr->second;
    }
    outfile.close();
    
    //return the recently created account
    return account;
}
//will traverse to the accountNumber received as an argument
Account Bank::BalanceEnquiry(long accountnumber)
{
	//find() will return the account with specified accountnumber
    map<long,Account>::iterator itr=accounts.find(accountnumber);
    return itr->second;
}
//same as above, the only difference is that it will store the 
Account Bank::Deposit(long accountNumber,float amount)
{
    map<long,Account>::iterator itr=accounts.find(accountNumber);
    itr->second.Deposit(amount);
    //return the value which is Account object
    return itr->second;
}
//for amount withdrawal
Account Bank::Withdraw(long accountNumber,float amount)
{
    map<long,Account>::iterator itr=accounts.find(accountNumber);
    itr->second.Withdraw(amount);
    //will return the specified withdrawal
    return itr->second;
}

//close an account
void Bank::CloseAccount(long accountNumber)
{
	//find the account using accountNumber
	//erase it with erase function
    map<long,Account>::iterator itr=accounts.find(accountNumber);
    cout<<"Account Deleted"<<itr->second;
    accounts.erase(accountNumber);
}

void Bank::ShowAllAccounts()
{

    map<long,Account>::iterator itr;
    for(itr=accounts.begin();itr!=accounts.end();itr++)
    cout<<"Account "<<itr->first<<endl<<itr->second<<endl;

}
Bank::~Bank()
{
    ofstream outfile;
    outfile.open("Bank.data",ios::trunc);
    map<long,Account>::iterator itr;
    for(itr=accounts.begin();itr!=accounts.end();itr++)
    outfile<<itr->second;
    outfile.close();
}
