#include <iostream>
using namespace std;
class student
{
protected:
    int rnumber;

public:
    void setn(int rnumber)
    {
        this->rnumber = rnumber;
    }
};

class test
{
protected:
    int m1, m2;
    int tmark;

public:
    void setm(int m1, int m2, int tmark)
    {
        this->m1 = m1;
        this->m2 = m2;
        this->tmark = tmark;
    }
};

class result : public student, public test
{

public:
    void display()
    {
        cout << "the roll number of student is " << rnumber << endl;
        cout << "the mark obtain in two subject is " << m1 + m2 << endl;
        cout << "the total mark is " << tmark << endl;
    }
};

int main()
{
    result o1;
    o1.setn(1);
    o1.setm(60, 70, 200);
    o1.display();
    return 0;
}