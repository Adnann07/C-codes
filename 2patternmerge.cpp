#include<iostream>
using namespace std;
int main()
{
    for(int r=1;r<=5;r++)
    {
        for(int c=1;c<=r;c++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int r=4;r>=1;r--)
    {
        for(int c=1;c<=r;c++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
