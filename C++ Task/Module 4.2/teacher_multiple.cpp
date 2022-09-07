#include <iostream>
using namespace std;
class person
{
protected:
    int id;
    string name;

public:
    void setnid(int id, string name)
    {
        this->name = name;
        this->id = id;
    }
};

class student
{
protected:
    int m1, m2,m;

public:
    void setm(int m1, int m2)
    {
        this->m1 = m1;
        this->m2 = m2;
        m=m1+m2;
    }
};

class teacher : public person, public student
{

public:
    void display()
    {

        cout << "the name of student is " << name << endl;
        cout << "the id of student is " << id << endl;
        cout << "the mark1 of student is " << m1 << " and mark2 is  " << m2 << endl;
        cout << "the percentage of student is " << m / 2 << endl;
    }
};
int main()
{
    teacher o1;
    o1.setnid(1, "ashok");
    o1.setm(70, 50);
    o1.display();
    return 0;
}