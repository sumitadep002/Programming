#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vector1;
    vector<int> vector2;

    vector<vector<int>> vector_2d;

    vector1.push_back(10);
    vector2.push_back(20);

    cout << vector1.at(0);
    cout << endl
         << vector2.at(0);

    cout << endl
         << "size of vector1 " << vector1.size();
    cout << endl
         << "size of vector2 " << vector2.size();

    vector2.push_back(100);
    vector2.push_back(200);

    cout << endl
         << "vector2 elements :";

    int cap1 = vector1.size();
    int cap2 = vector2.size();

    for (int i = 0; i < cap2; i++)
    {
        cout << endl
             << "vector2[" << i << "] " << vector2.at(i);
    }

    vector_2d.push_back(vector1);

    vector_2d.push_back(vector2);

    int cap_2d = vector_2d.size();
    

    cout<<endl<<"elements of 2D vector :";

    for(int i=0;i<cap_2d;i++)
    {
        for(int j=0;j<cap2;j++)
        {
            cout<<"\nvector2D["<<i<<"]["<<j<<"] "<<vector_2d[i].at(j);
        }
    }
    cout<<endl;

    vector1.at(0)=1000;

    for(int i=0;i<vector1.size();i++)
    cout<<"vector1["<<i<<"] "<<vector1.at(i);



    return 0;
}