#include<iostream>
using namespace std;
struct trapezoid{

    double base1;
    double base2;
    double height;


};

double area(trapezoid t)
{
    return 0.5*(t.base1*t.base2)*t.height;
}
int main()
{
    trapezoid t;
    cin>>t.base1>>t,base2>>t.height;
    double area=area(t);
    cout<<area<<endl;
}
