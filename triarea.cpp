
#include<iostream>
using namespace std;
struct triangle{
    double base;
    double height;

};
double area(triangle t)
{
    return 0.5*t.base*t.height;
}
int main()
{
    triangle t;
    cout<<"enter base and height: "<<endl;
    cin>>t.base>>t.height;
    double a=area(t);
    cout<<"area is: "<<a<<endl;
}
