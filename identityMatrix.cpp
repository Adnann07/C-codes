#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int identity=1;
    int a[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[n][m];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j && a[i][j]!=1)
            {
                identity=0;
                break;


            }
            if(i!=j && a[i][j]!=0)
            {
                identity=0;
                break;
            }

        }
        if(identity==0)
            {
                break;
            }
    }
    if(identity)
    {
        cout<<"It is an identity matrix";
    }
    else
    {
        cout<<"Not identity matrix";
    }

}
