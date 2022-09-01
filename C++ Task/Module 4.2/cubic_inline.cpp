#include <iostream>
using namespace std;

inline int mul(int a, int b)
{
    return a * b;
}
inline int cub(int c)
{
    return c * c * c;
}

int main()
{
    cout << "the multiplication of a and b is " << mul(4, 5) << endl;
    cout << "the cube of a and b is " << cub(4) << endl;

    return 0;
}