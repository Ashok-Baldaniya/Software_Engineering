#include <iostream>
using namespace std;

template <class a1, class a2>

class A
{
    a1 a;
    a2 b;

public:
    A(a1 a, a2 b)
    {
        this->a = a;
        this->b = b;
    }

    void swap()
    {
        a = a + b;
        b = a - b;
        a = a - b;
        cout << a << " " << b << endl;
    }
};

int main()
{
    A<int, float> a1(5, 9);
    a1.swap();
    return 0;
}
