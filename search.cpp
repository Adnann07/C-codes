#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int c=0;
    int x;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


    cout<<"Enter element you wish to search: "<<endl;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            c++;
        }
    }
    cout<<x<<" has been found!"<<endl;


}
