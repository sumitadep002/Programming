#include<iostream>
using namespace std;
class Data
{
private:
int data;
public:
int GetData();
void SetData(int d);
void operator --()
{
data--;
}
};

int main()
{
Data d;
d.SetData(5);
cout<<d.GetData()<<endl;
--d;
cout<<d.GetData()<<endl;

return 0;
}

int Data::GetData()
{
return data;
}
void Data::SetData(int d)
{
data=d;
}

