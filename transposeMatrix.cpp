#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int a[m][n]

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            transpose[i][j]=a[i][j];
        }
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<"\n";
    }

}
