
#include<iostream>
using namespace std;

struct triangle{

    double s1,s2,s3;


};

int is_triangle(triangle b)
{


    if((b.s1+b.s2>b.s3) && (b.s1+b.s3>b.s2) && (b.s2+b.s3>b.s1))
    {
        return 1;
    }


else
{
    return 0;
}
}
int main()
{

    triangle t;
    cout<<"enter triangle sides: "<<endl;
    cin>>t.s1>>t.s2>>t.s3;

    if(is_triangle(t)==1)
    {

        cout<<"possible"<<endl;
    }
    else
    {
        cout<<"Not possible"<<endl;
    }
}
