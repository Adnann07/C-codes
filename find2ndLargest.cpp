
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
    int first_Largest;
    int second_Largest;

    for(int i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
            second_Largest=first_Largest;
            first_Largest=a[i];
        }
    }
    cout<<"Second Largest: "<<second_Largest<<endl;



}
