#include<iostream>
using namespace std;
evenodd(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else if(a%2!=0)
    {
        return 0;
    }

}
int main()
{
    int a,x;
    cin>>a;
    x=evenodd(a);
    if(x==1)
    {
        cout<<"even"<<endl;
    }
    else if(x==0)
    {
        cout<<"odd"<<endl;
    }

}

