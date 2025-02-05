#include<iostream>
using namespace std;
class BankAccount
{
    char name[20];
    long int acc_no,balance=1000;

    public:

    void details()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter acc no : ";
        cin>>acc_no;
        cout<<"Balance:"<<balance<<endl;

    }

    void deposite(int acc)
    {
        if(acc==acc_no)
        {
        int i,new_balance;
        cout<<"Enter the amount that you want to add : ";
        cin>>i;
        new_balance=balance+i;
        cout<<"New Balance : "<<new_balance;

        }

    }

};

int main()
{
    BankAccount A;
    int i,findacc;
    for(i=0;i<5;i++)
    {
        A.details();
    }
    cout<<"Enter acc no for find : ";
    cin>>findacc;
    for(i=0;i<5;i++)
    {
        A.deposite(findacc);
        break;
    }

}
