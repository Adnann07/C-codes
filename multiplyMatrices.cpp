#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    int b[3][3];
    int m[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m[i][j]+=a[i][j]*b[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
}

