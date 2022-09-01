#include <iostream>
using namespace std;

void add(int a, int b)
{

    cout << "the addition of " << a << " and " << b << " is " << a + b << endl;
}

void add(float a, int b)
{

    cout << "the subtraction of " << a << " and " << b << " is " << a - b << endl;
}

void add(int a, float b)
{

    cout << "the multiplication of " << a << " and " << b << " is " << a * b << endl;
}

void add(float a, float b)
{

    cout << "the division of " << a << " and " << b << " is " << a / b << endl;
}

int main()
{
    add(4, 4);
    add((float)8.3, 5);
    add(5, (float)1.5);
    add((float)3.5, (float)1.5);

    return 0;
}