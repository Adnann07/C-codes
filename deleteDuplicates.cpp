#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,j;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Deleting duplicates: . . ."<<endl;
    for(i=0;i<n;i++)
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
