#include<iostream>
using namespace std;
void maxmin(int a,int b,int *maxi,int *mini)
{
    if(a>b)
    {
        *maxi=a;
        *mini=b;
    }
    else{
        *maxi=b;
        *mini=a;
    }
}
int main()
{
    int a,b,maxi,mini;
    cin>>a>>b;
    maxmin(a,b,&maxi,&mini);
    cout<<"maximum: "<<maxi<<endl<<"minimum: "<<mini<<endl;
}
