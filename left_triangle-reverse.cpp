#include<iostream>
using namespace std;
int main()
{
    for(int r=1;r<=5;r++)
    {
        if(r>1)
        {
            for(int space=1;space<r;space++)
            {
                cout<<" ";
            }
        }

        for(int c=r;c<=5;c++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
