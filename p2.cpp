#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    for(int r=1;r<=n1;r++)
    {
        for(int c=1;c<=n2;c++)
        {
            if(r==1 || r==n1 || c==1 || c==n2)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
