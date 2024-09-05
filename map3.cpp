
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


        map<string,int> student;
        student["Adnan"]=99;
        student["emon"]=100;
        for(auto it: student)
        {
            cout<<it.first<<" :"<<it.second<<endl;
        }
    }
}
