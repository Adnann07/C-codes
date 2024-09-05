
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<string,int> student;
        student["adnan"]=99;
        student["emon"]=100;
        string key="adnan";
        if(student.find(key)!=student.end())
        {
            cout<<key<<endl;
        }
        else cout<<"NO"<<endl;

    }
}
