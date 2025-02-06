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
        int i;
        cout<<"Enter the amount that you want to add : ";
        cin>>i;
        balance=balance+i;
        cout<<"New Balance : "<<balance<<endl;
        }
    }

    void withdraw(int acc)
    {
        if(acc==acc_no)
        {
        int withdraw_amount;
        cout<<"Enter the amount that you want to withdraw : ";
        cin>>withdraw_amount;
        if(withdraw_amount>balance)
        {
            cout<<"Account has insufficient balance...";
        }
        else
        {
        balance=balance-withdraw_amount;
        cout<<"New Balance : "<<balance;
        }

        }
    }
};

int main()
{
    BankAccount A;
    int i,findacc,findacc2;
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
    cout<<"Enter acc no for find : ";
    cin>>findacc;
    for(i=0;i<5;i++)
    {
        A.withdraw(findacc);
        break;
    }

}
