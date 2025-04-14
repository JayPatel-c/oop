#include <iostream>
using namespace std;

class Account
{
    char HolderName[30];
    int AccountNo;
    double CurrentBalance;

    public:

    void CreateAccount()
    {
        cout<<"Enter Holder Name : ";
        cin>>HolderName;
        cout<<"Enter Account Number : ";
        cin>>AccountNo;
    b1:
        cout<<"Enter current Balance : ";
        cin>>CurrentBalance;
        if(CurrentBalance<1000)
        {
            cout<<"Minimum required balance is 1000..."<<endl;
            goto b1;
        }
    }

    void DepositMoney(int CheckAccountNo)
    {
        if(CheckAccountNo==AccountNo)
        {
        double NewAmount;
        cout<<"Enter your amount that you want to deposit : ";
        cin>>NewAmount;
        CurrentBalance=CurrentBalance+NewAmount;
        cout<<"Your new balance is : "<<CurrentBalance<<endl;
        }
        else
        {
            cout<<"Enter valide account number."<<endl;
        }
    }


    double WithdrawMoney(int CheckAccountNo)
    {
        if(CheckAccountNo==AccountNo)
        {
        double WithdrawAmount;
        cout<<"Enter your amount that you want to withdraw : ";
        cin>>WithdrawAmount;
        CurrentBalance=CurrentBalance-WithdrawAmount;
        cout<<"Your new balance is : "<<CurrentBalance<<endl;
        }
        else
        {
            cout<<"Enter valide account number."<<endl;
        }
        return CurrentBalance;
    }

    void DisplayDetails(int CheckAccountNo)
    {
        if(CheckAccountNo==AccountNo)
        {
        cout<<"Holder Name : "<<HolderName<<endl;
        cout<<"number : "<<AccountNo<<endl;
        cout<<"CurrentBalance : "<<CurrentBalance<<endl;
        }
        else
        {
            cout<<"Enter valide account number."<<endl;
        }
    }
};
int main()
{
    Account A;
    int choice;
   next:
    cout<<"Enter '1' for create Account."<<endl;
    cout<<"Enter '2' for deposit money."<<endl;
    cout<<"Enter '3' for withdraw money."<<endl;
     cout<<"Enter '4' for Display Details."<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        {
            A.CreateAccount();
            break;
        }
        case 2:
        {
            int CheckAccountNo;
            cout<<"Enter account number : ";
            cin>>CheckAccountNo;
            A.DepositMoney(CheckAccountNo);
            break;
        }
         case 3:
        {
            int CheckAccountNo;
            cout<<"Enter account number : ";
            cin>>CheckAccountNo;
            A.WithdrawMoney(CheckAccountNo);
            break;
        }
        case 4:
        {
            int CheckAccountNo;
            cout<<"Enter account number : ";
            cin>>CheckAccountNo;
            A.DisplayDetails(CheckAccountNo);
        }
    }
    goto next;

    return 0;
}
