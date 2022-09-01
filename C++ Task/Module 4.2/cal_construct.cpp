#include<iostream>
using namespace std;

class cal
{
    int a,b;
    float x,y;
    public:
    cal(){}
    cal(int a,int b)
    {
        this->a=a;
        this->b=b;

        cout<<"the addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
        cout<<"the subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
        cout<<"the multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
        cout<<"the division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
    }

    cal(float x,float y)
    {
        this->x=x;
        this->y=y;
        
        cout<<"the division of "<<x<<" and "<<y<<" is "<<x/y<<endl;
    }
};

int main()
{
    cal o1(3.5,1.5);
    return 0;
}