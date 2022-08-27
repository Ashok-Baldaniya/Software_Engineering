#include <iostream>
using namespace std;

class bank
{

    string name;
    int anumber;
    string actype;
    int balance;
    int update_bal;
    int update_bal1;

public:
    void value(string name, int anumber, string actype, int balance)
    {
        this->name = name;
        this->anumber = anumber;
        this->actype = actype;
        this->balance = balance;
        cout << name << " " << anumber << " " << actype << " " << balance << endl;
    }

    void deposit(int deposit)
    {
        cout << "Before deposite, your account balance is " << balance << endl;
        cout << "the deposit amount is " << deposit << endl;
        cout << "After Deposite " << deposit << "Rs the balance is " << balance + deposit << endl;
        update_bal = balance + deposit;
    }

    void withdraw(int withdraw)
    {
        cout << "Before withdraw, your account balance is " << update_bal << endl;
        cout << "the withdraw amount is " << withdraw << endl;
        cout << "After withdraw " << withdraw << "Rs. the balance is " << update_bal - withdraw << endl;
        update_bal1 = update_bal - withdraw;
    }
    void display()
    {
        cout << "the name of customer is " << name << " and account balance is " << update_bal1 << endl;
    }
};
int main()
{
    bank o1;
    o1.value("Ashok", 12345, "saving", 50000);
    o1.deposit(2000);
    o1.withdraw(1000);
    o1.display();

    return 0;
}