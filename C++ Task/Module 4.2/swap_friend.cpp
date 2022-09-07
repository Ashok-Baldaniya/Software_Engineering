#include <iostream>
using namespace std;
class B;
class A
{
    int a;

public:
    A() {}
    A(int a)
    {
        this->a = a;
    }
    friend void swap(A a1, B b1);
};

class B
{
    int b;

public:
    B() {}
    B(int b)
    {
        this->b = b;
    }
    friend void swap(A a1, B b1);
};

void swap(A a1, B b1)
{
    a1.a = a1.a + b1.b;
    b1.b = a1.a - b1.b;
    a1.a = a1.a - b1.b;
    cout << "after swap the value of a and b is " << a1.a << " " << b1.b << endl;
}

int main()
{
    A s1(4);
    B s2(9);
    swap(s1, s2);
    return 0;
}