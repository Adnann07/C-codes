#include<iostream>
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

    cout<<"negative numbers are: "<<endl;
    for(int i=0;i<n;i++)
    {

        if(a[i]<0)
        {
            cout<<a[i]<<endl;
        }
    }
}
