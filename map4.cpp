
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
       student.erase("adnan");
       for(auto it: student)
       {
           cout<<it.first<<" :"<<it.second<<endl;
       }


    }
}
