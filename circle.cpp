#include<iostream>
using namespace std;
struct circle{

    double radius;

};
double area(circle radius)
{
    return 3.1416*r*r;
}
int main()
{
    circle c;
    cin>>c.radius;
    double a=area(c);
    cout<<a<<endl;
}
