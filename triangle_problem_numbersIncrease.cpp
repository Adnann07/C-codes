#include<iostream>
using namespace std;
int main()
{
    int count=1;

    for(int r=1;r<=5;r++)
    {
        for(int c=1;c<=r;c++)
        {
            cout<<count++<<" ";
        }
        cout<<"\n";
    }
}
