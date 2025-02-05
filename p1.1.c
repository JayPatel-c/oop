#include<iostream>
using namespace std;
class BankAccount
{
    char name[20];
    long int acc_no,balance;

    void details()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter acc no : ";
        cin>>acc_no;
        cout<<"Balance=1000";
    }
};

void main()
{
    BankAccount A;
    int i;
    for(i=0;i<5;i++)
    {
        A.details();
    }
}
