#include<iostream>
using namespace std;
struct rectangle{
    double height;
    double width;


};
double area(rectangle r)
{
    return r.height*r.width;
}
int main()
{
    rectangle r;
    cout<<"enter length and width"<<endl;
    cin>>r.height>>r.width;

    double a= area(r);
    cout<<a<<endl;
}
