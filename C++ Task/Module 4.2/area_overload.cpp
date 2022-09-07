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

void areac(float b,float h)
{
    cout << "the area of triangle is " << (b*h)/2<< endl;
}

int main()
{
    areac(5);
    areac(4, 5);
    areac((float)3.5,5.4);
    return 0;
}