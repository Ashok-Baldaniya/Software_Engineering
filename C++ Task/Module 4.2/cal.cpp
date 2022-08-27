#include <iostream>
using namespace std;

class cal
{

public:
    void add(int a, int b)
    {
        cout << "the addition of " << a << " and " << b << " is " << a + b << endl;
    }
    void sub(int a, int b)
    {
        cout << "the subtraction of " << a << " and " << b << " is " << a - b << endl;
    }
    void mul(int a, int b)
    {
        cout << "the multiplication of " << a << " and " << b << " is " << a * b << endl;
    }
    void div(int a, int b)
    {
        cout << "the division of " << a << " and " << b << " is " << a / b << endl;
    }
};

int main()
{
    cal o;
    o.add(4, 5);
    o.sub(5, 2);
    o.mul(5, 5);
    o.div(4, 2);
    return 0;
}