#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //if string has a space then use getline(cin,s)
    int x=s.length();
    cout<<s[0];
    string s2;
    cin>>s2;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    if(s1==s2)
    {
        cout<<"equal"<<endl;
    }
    cout<<s1+" "+s2<<endl;

}
