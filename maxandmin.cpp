#include<iostream>
using namespace std;
int main()
{
    int n;

    cin>>n;
    int a[n];

    int max;
    int min;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    max=a[0];
    for(int i=0;i<n;i++)
    {

        if(a[i]<=a[i+1])
        {
            max=a[i+1];
        }
    }
    cout<<"maximum: "<<max<<endl;

    min=a[0];
     for(int i=0;i<n;i++)
    {

        if(a[i]>=a[i+1])
        {
            min=a[i+1];
        }
    }

    cout<<"minimum: "<<min<<endl;







}

