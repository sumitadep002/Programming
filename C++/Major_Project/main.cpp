#include <iostream>
#include <fstream>
#include <ctime>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

float price_list[20] = {865, 2.25, 44, 10, 20, 7710, 33.33, 48.97, 8, 0.5, 0.01,
                        88, 999, 25000, 87, 4, 22, 200, 20, 150};

class po;
class requisition
{
private:
    float Total;
    static int Requisition_Number;
    int Item_Code;
    int Quantity;
    string Supplier;
    string Delivery_Date;

public:
    void Get_Data();
    void Display();
    friend void Generate(requisition, po);
};
int requisition::Requisition_Number = 0;

class po
{
private:
    static int PO_Number;

public:
    friend void Generate(requisition, po);
    po() { PO_Number++; }
};
int po::PO_Number = 0;

int main()
{
    int choice;
    requisition r;
    po p;
    do
    {
        system("clear");
        cout << "\n\n\n\t\t\t\t\t\t\t\t\t                  PR2PO";
        cout << "\n\t\t\t\t\t\t\t\t\t*****************************************";
        cout << "\n\t\t\t\t\t\t\t\t\t1.Create New Requisition";
        cout << "\n\t\t\t\t\t\t\t\t\t2.Display Requisition";
        cout << "\n\t\t\t\t\t\t\t\t\t3.Generate PO";
        cout << "\n\t\t\t\t\t\t\t\t\t4.Exit";
        cout << "\n\t\t\t\t\t\t\t\t\tSelect an option by typing  the numeric code:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            system("clear");
            r.Get_Data();
            break;

        case 2:
            system("clear");
            r.Display();
            break;
        case 3:
            system("clear");
            Generate(r,p);
            break;

        default:
            break;
        }
    } while (choice != 4);

    system("clear");
    return 0;
}

void requisition::Get_Data()
{
    Requisition_Number++;
    cout << "\t\t\t\t\t\t\t\t\tProduct item Code: ";
    cin >> Item_Code;

    if (Item_Code > 20 || Item_Code < 1)
    {
        cout << "\n\t\t\t\t\t\t\t\t\tInvalid Item Code";
        return;
    }

    cout << "\t\t\t\t\t\t\t\t\tQuantity: ";
    cin >> Quantity;

    cout << "\t\t\t\t\t\t\t\t\tDelivery Date: ";
    cin >> Delivery_Date;

    if (Item_Code >= 1 && Item_Code <= 10)
        Supplier = "SKS Inc";
    else
        Supplier = "KC Spare Parts Ltd.";

    Total = price_list[Item_Code - 1] * Quantity;

    cout << "\n\t\t\t\t\t\t\t\t\tData Entered Succefully!!!";
    cout << "\n\n\t\t\t\t\t\t\t\t\tPress any key and then Enter to return to the main menu: ";
    cin.ignore();
    cin.get();
}

void requisition::Display()
{

    cout << "\n\t\t\t\t\t\t\t\t\tRequisition Number: " << Requisition_Number;
    cout << "\n\t\t\t\t\t\t\t\t\tItem Code: " << Item_Code;
    cout << "\n\t\t\t\t\t\t\t\t\tQuantity: " << Quantity;
    cout << "\n\t\t\t\t\t\t\t\t\tDelivery Date: " << Delivery_Date;

    cout << "\n\n\t\t\t\t\t\t\t\t\tPress any key and then Enter to return to the main menu: ";
    cin.ignore();
    cin.get();
}

void Generate(requisition r, po p)
{
    //opening file
    fstream fout;
    fout.open("current_PO.txt", ios::out|ios::app);
    if (!fout)
    {
        cout << "\n\t\t\t\t\t\t\t\t\tFailed to create file";
        return;
    }

    //print the info of PO
    time_t currentTime = time(nullptr);
    tm* currentDateTime = std::localtime(&currentTime);

    string weekdays[] = { "Sun", "Mon", "Tues", "Wednes", "Thurs", "Fri", "Satur" };
    string months[] = { "Jan", "Feb", "Mar", "Apr", "May", "June", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec" };

    fout << "\n                                                             Purchase Order: " << p.PO_Number;
    fout<<"\nRequisition: "<<r.Requisition_Number;
    fout << "\n 									                                Issue Date: "<<weekdays[currentDateTime->tm_wday];
    fout<<" "<<months[currentDateTime->tm_mon];
    fout<<" "<<currentDateTime->tm_mday;
    fout<<" "<<currentDateTime->tm_hour;
    fout<<" "<<currentDateTime->tm_min;
    fout<<" "<<currentDateTime->tm_sec;
    fout<<" "<<currentDateTime->tm_year;

    fout<<endl;
    fout<<endl<<"Supplier: "<<r.Supplier;
    fout<<endl<<"Delivery Date: "<<r.Delivery_Date;
    fout<<endl<<"--------------------------------------------------------------------------------------------------------------------";
    fout<<endl<<"					**Line Items**";
    fout<<endl<<"--------------------------------------------------------------------------------------------------------------------";
    fout<<endl<<"Item Code				Quantity			Price			Total";
    fout<<endl<<"_________				________			_____			_____";
    fout<<endl<<endl<<r.Item_Code<<"				"<<r.Quantity<<"				"<<price_list[r.Item_Code]<<"            "<<r.Total;

    fstream fin;
    fin.open("terms.txt",ios::in);

    
    cin.ignore();
    if (!fout)
    {
        cout << "\n\t\t\t\t\t\t\t\t\tFailed to create file";
        return;
    }
    char line[90];
    while(fin.getline(line,90))
    {
        fout<<endl<<line;
    }

    cout << "\n\n\t\t\t\t\t\t\t\t\tPurchase Order has been prepared successfully please Checkout current_PO.txt file";
    cout << "\n\n\t\t\t\t\t\t\t\t\tPress any key and then Enter to return to the main menu: ";
    cin.ignore();
    cin.get();
}