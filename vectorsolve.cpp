#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

   reverse(v.begin(),v.end());

   for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<*max_element(v.begin(),v.end());
    sort(v.begin(),v.end());

    auto it=unique(v.begin(),v.end());
    v.erase(it,v.end());

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    rotate(v.begin(),v.begin()+3,v.end());

    merge(v1.begin(),v1.end(),v2.begin(),v2.end());


}
