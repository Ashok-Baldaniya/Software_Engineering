#include<iostream>
using namespace std;

class B;
class A
{
    int a;
    public:
    A(int a)
    {
        this->a=a;
    }
    friend void max(A a,B b);
};

class B
{
    int b;
    public:
    B(int b)
    {
        this->b=b;
    }
    friend void max(A a,B b);
};

void max(A a,B b)
{
    if (a.a>b.b)
    {
        cout<<"a is greater"<<endl;
    }
    else
    {
        cout<<"b is greater"<<endl;
    }
    
}
int main()
{
    A a1(49);
    B b1(36);
    max(a1,b1);
    return 0;
}