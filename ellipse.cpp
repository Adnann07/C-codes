#inlcude<iostream>
using namespace std;

struct ellipse{
    double semi_axis;
    double semi_minor;


};
double area(ellipse e)
{
    return 3.1416*e.semi_axis*e.semi_minor;
}
int main()
{
    ellipse e;
    cin>>e.semi_axis>>e.semi_minor;
    double a=area(e);
    cout<<a<<endl;
}
