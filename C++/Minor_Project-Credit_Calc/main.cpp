#include<iostream>

using namespace std;
 class applicant
 {
    string name;
    string address;
    long salary;
    long home_loan;
    long emi;
    int number_of_cheque_bounce;
    char own_house;
    char parent_dependency;
    char spouse_working;
    int age;
    int credit_score;
    int company_tier;

    public:
        void get_data();
        void calc_liability();
        int get_score(){return credit_score;}
 };

int main()
{
    applicant application;
    int choice;
    cout<<"\t\t\t\tCredit Score\n"<<"\t\t\t_____________________________\n";

    do
    {
        cout<<"\n\t\t1.Enter Applicant's details\n";
        cout<<"\t\t2.Display Credit Score\n";
        cout<<"\t\t3.Exit\n";
        cout<<"\n\t\tSelect an option by typing  the numeric code:";

        cin>>choice;

        switch (choice)
        {
        case 1:
            application.get_data();
            break;
        
        case 2:
            cout<<"\n\n\t\tYour Credit Score: "<<application.get_score()<<endl<<endl;
            break;

        case 3:
            cout<<"\t\tOK Exiting the program";
        
        default:
            cout<<"Invalid Request\n";
            break;
        }



    }while(choice!=3);



    return 0;
}

void applicant::get_data()
{
    cout<<"\n\t\tName of applicant: ";
    cin.ignore(); // Clear the input buffer before entering a string.
    getline(cin, name);

    cout<<"\n\t\tAge: ";
    cin>>age;

    cout<<"\n\t\tAddress: ";
    cin.ignore();
    getline(cin, address);

    cout<<"\n\t\tSalary: ";
    cin>>salary;

    cout<<"\n\t\tTotal Home Loan: ";
    cin>>home_loan;

    cout<<"\n\t\tTotal Loan EMI: ";
    cin>>emi;

    cout<<"\n\t\tTotal Number of cheque bounces in the last six months: ";
    cin>>number_of_cheque_bounce;

    cout<<"\n\t\tOwn house? <y or n>: ";
    cin>>own_house;

    cout<<"\n\t\tSpouse Working? <y or n>: ";
    cin>>spouse_working;

    cout<<"\n\t\tDependent Parents? <y or n>: ";
    cin>>parent_dependency;

    cout<<"\n\t\tCompany tier? <1, 2, or 3>: ";
    cin>>company_tier;

    calc_liability();
}


void applicant:: calc_liability()
{
    credit_score = 0;
    if(age>22 && age<30)
    credit_score+=2;
    else if(age>=30 && age<35)
    credit_score--;
    

    long temp = home_loan+emi;
    if(temp<(salary/4))
    credit_score+=5;
    else if(temp>(salary/4) && temp<(salary/3))
    credit_score+=3;
    else if(temp>(salary/3) && temp<(salary/2))
    credit_score++;
    else if(temp>(salary/2))
    credit_score--;

    if(number_of_cheque_bounce >=2)
    credit_score-=2;
    else if(number_of_cheque_bounce == 1)
    credit_score--;
    else if(number_of_cheque_bounce == 0)
    credit_score++;

    if(home_loan >= emi)
    credit_score--;

    if(own_house == 'y')
    credit_score++;
    else if(own_house == 'n')
    credit_score--;

    if(spouse_working == 'y')
    credit_score++;
    else if(spouse_working == 'n')
    credit_score--;

    if(parent_dependency == 'y')
    credit_score--;
    else if(parent_dependency == 'n')
    credit_score++;

    if(company_tier ==1)
    credit_score+=3;
    else if(company_tier==2)
    credit_score+=2;
    else if(company_tier==3)
    credit_score++;


}
