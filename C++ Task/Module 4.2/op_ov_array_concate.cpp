#include<iostream>
using namespace std;

class A
{
    int a[100]={2,6};
    public:
    A(){}
    A (int a[100])
    {
        this->a[100]=a[100];
    }

    A operator+(A obj)
    {
        A temp;
        temp=a+obj.a;
        return temp;
    }
};

int main()
{
    A a1({1,2}),a2({3,5}),a3;
    a3=a1+a2;
    a3.display();
    return 0;
}