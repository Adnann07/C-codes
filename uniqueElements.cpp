#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i,j;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for( i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                break;
            }
        }
        if(j==i)
        {
            cout<<a[i]<<endl;
        }
    }

}
