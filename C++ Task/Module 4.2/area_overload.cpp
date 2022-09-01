#include <iostream>
using namespace std;

void areac(int r)
{
    cout << "the area of circle is " << 3.14 * r * r << endl;
}

void areac(int l, int b)
{
    cout << "the area of rectangle is " << l * b << endl;
}

void areac(float r)
{
    cout << "the area of triangle is " << 3.14 / 2 * r * r << endl;
}

int main()
{
    areac(5);
    areac((float)3.5);
    areac(4, 5);
    return 0;
}