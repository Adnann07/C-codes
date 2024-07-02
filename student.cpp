#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct student{
    string name;
    double marks;
    char status;


};
int main()
{
    ifstream inputfile("student.txt");
    int num;
    inputfile>>num;

    ofstream outputfile("passed.txt");
    for(int i=0;i<num;i++)
    {
        student s;
        getline(cin,s.name);
        cin>>s.marks;

        if(s.marks>=40)
        {
            s.status='p';
            cout<<s.name<<s.marks<<s.status;
        }
        else
        {
            s.status='f';
        }

    }
    inputfile.close();
    outputfile.close();

}
