#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

double div(double a,double b)
{
    return a/b;
}
int main()
{
    int a,b;
    int choice;
    cin>>a>>b;

    cout<<"press 1 for addition"<<"\n"<<"press 2 for substraction"<<"\n"<<"press 3 for multiplication"<<"\n"<<"press 4 for division"<<endl;
    cin>>choice;

    switch(choice)
    {
    case 1:
        cout<<sum(a,b);
    case 2:
        cout<<sub(a,b);
    case 3:
        cout<<mul(a,b);
    case 4:
        cout<<div((double)a,(double)b);
    default:
        cout<<"Invalid choice"<<endl;

    }
}
