#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream fout;
    fout.open("terms.txt",ios::out);
    if(!fout)
    {
    cout<<"Failed to create file\n";
    return 0;
    }

    fout<<"Standard Terms and Conditions\n";
    fout<<"1. PO shoulbe be acknowledge withing 7 days of date of issue\n";;
    fout<<"2. PO will be null and void if goods are not delivered by delivery date.\n";;
    fout<<"3. Defective goods will be returned back to the supplier\n";
    fout<<"4. Invoice can only  be raised after 20 days of date of goods receipt\n";
    fout<<"5. Damages during transit (if any) will be done by the supplier";

    fout.close();
}