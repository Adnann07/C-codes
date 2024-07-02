
#include<iostream>
using namespace std;

struct practise{

public:
    int public_member;


    void setprivate_member(int value)
    {
        private_member=value;
    }
    int getprivate_member() const
    {
        return private_member;
    }

private:
    int private_member;



};

int main()
{

    practise p;
    p.public_member=10;

    p.setprivate_member(20);
    int value=p.getprivate_member();
    cout<<p.public_member<<value<<endl;
}
