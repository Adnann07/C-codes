#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
        }

    }


     for(int i=0;i<n;i++)
    {
        if(a[i]<mini)
        {
            mini=a[i];
        }

    }

    cout<<maxi<<endl;
    cout<<mini<<endl;
}
