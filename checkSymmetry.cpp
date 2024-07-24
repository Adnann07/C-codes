
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int c=0;
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
            if(a[i][j]!=a[j][i])
            {
                c++;
                break;
            }
        }
    }
    if(c==0)
    {
        cout<<"Symmetric matrix"<<endl;
    }
    else
    {
        cout<<"Not symmetric"<<endl;
    }

}
