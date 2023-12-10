#include <iostream>
#include <fstream>
using namespace std;
class student
{
private:
    string name;
    string rollNumber;
    float percentage;
    unsigned short grade;

public:
    student(/* args */);
    ~student();

    // accessors
    string getName() { return name; };
    string getrollNumber() { return rollNumber; };
    float getPercentage() { return percentage; };
    unsigned short getGrade() { return grade; };

    // mutators
    void setName(string name) { this->name = name; }
    void setrollNumber(string rollNuber) { this->rollNumber = rollNuber; }
    void setpercentage(float percentage) { this->percentage = percentage; }
    void setGrade(unsigned short grade) { this->grade = grade; }

    // get user input
    void getData();
    void showData();
    void writeIntoFile();
    void readFromFile();
    
};
void showChoice();
int main()
{
    student s;
    char choice;
    
    do
    {
        showChoice();
        cout << "\nenter your choice:";
        cin >> choice;
        switch (choice)
        {
        case '1':
            s.getData();
            break;
        case '2':
            s.showData();
            break;
        case '3':
            s.writeIntoFile();
            break;
        case '4':
            s.readFromFile();
            break;
        case '5':
            cout << "\npermission granted now you can quit";
            break;
        default:
            cout << "\nentered ivalid choice\n*********please try again*********";
            break;
        }
    } while (choice != '5');
    return 0;
}

void showChoice()
{
    cout << "\n\t\t1.enter the student details\n\t\t2.see student details\n\t\t3.write entered student details into file\n\t\t4. Read From File\n\t\t5.Quit";
}
void student :: writeIntoFile()
    {
        ofstream fout;
        fout.open("Student_register.txt",ios::app);
        
        fout<<name<<" "<<rollNumber<<" "<<percentage<<" "<<grade<<endl;

        fout.close();
        if(!fout)
        cout<<"\ndata stored in file succefully";
    }
void student::getData()
{
    cout << "\nname: ";
    cin >> name;
    cin.ignore();
    cout << "\nroll number: ";
    cin >> rollNumber;
    cin.ignore();
    cout << "\ngrade: ";
    cin >> grade;
    cin.ignore();
    cout << "\npercentage: ";
    cin >> percentage;
    cin.ignore();
}
void student::showData()
{
    cout << "\nname of student: ";
    cout << name;

    cout << "\nroll number of student: ";
    cout << rollNumber;

    cout << "\ngrade of student: ";
    cout << grade;

    cout << "\npercentage of student: ";
    cout << percentage;
}
void student::readFromFile()
{
    ifstream fin;
    fin.open("Student_registar.txt",ios::in);
    fin>>name;
    fin>>rollNumber;
    fin>>grade;
    fin>>percentage;
    fin.close();
}
student::student(/* args */)
{
    name = "Not defined yet";
    rollNumber = "Not defined yet";
    percentage = 0;
    grade = 0;
}
student::~student()
{
}