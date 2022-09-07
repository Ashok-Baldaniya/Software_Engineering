#include <iostream>
using namespace std;
class student
{
protected:
    int id;
    string name;

public:
    void setnid(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
};

class mark : public student
{
protected:
    float m1, m2, m;

public:
    void setmark(float m1, float m2)
    {
        this->m1 = m1;
        this->m2 = m2;
        m = m1 + m2;
    }
};

class result : public mark
{

public:
    void display()
    {
        cout << "the id of student is " << id << endl;
        cout << "the name of student is " << name << endl;
        cout << "the mark of sub 1 is " << m1 << endl;
        cout << "the mark of sub 2 is " << m2 << endl;
        cout << "the total mark is " << m << endl;
        cout << "the percentage is " << m / 2 << endl;
    }
};

int main()
{
    result r;
    r.setnid(101, "ashok");
    r.setmark(70, 60);
    r.display();
    return 0;
}