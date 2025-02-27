
#include<iostream>
#include<math.h>
using namespace std;

class LoanAccount
{
    int loanID;
    char name[20];
    long LoanAmount;
    float InterestRate;
    float LoanTenure;
    double EMI;
    float AnnualRate;
    void CalculateEMI()
    {
        InterestRate=AnnualRate/12/100;
        EMI=((LoanAmount*InterestRate*pow((1+InterestRate),LoanTenure))/(pow((1+InterestRate),LoanTenure)-1));
    }

public:
    void AddDetails()
    {
        cout<<"Enter loan ID : ";
        cin>>loanID;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter Loan Amount : ";
        cin>>LoanAmount;
        cout<<"Enter Interest Rate : ";
        cin>>AnnualRate;
        cout<<"Enter Loan Tenure : ";
        cin>>LoanTenure;
        CalculateEMI();
    }

    void DisplayData(int checkID)
    {

        cout<<"----------------------"<<endl;
        cout<<"loan ID : "<<loanID<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Loan Amount : "<<LoanAmount<<endl;
        cout<<"Annual Rate : "<<AnnualRate<<endl;
        cout<<"Loan Tenure : "<<LoanTenure<<endl;
        cout<<"EMI : "<<EMI<<endl;
        cout<<"----------------------"<<endl;

    }
    int getID()
    {
        return loanID;
    }
};
int main()
{
    LoanAccount A[20];
    int numAcc=0;
    int choice;
    b:
    cout<<"Enter '1' for add account details."<<endl;
    cout<<"Enter '2' for display account details."<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            {
                A[numAcc].AddDetails();
                numAcc++;
                break;
            }
        case 2:
            {
                int checkID;
                cout<<"Enter check ID:";
                cin>>checkID;
                for (int i = 0; i < numAcc; i++)
                {
                    if(A[i].getID()==checkID)
                    {
                    A[i].DisplayData(checkID);
                    break;
                    }
                    else
                    {
                    cout<<"Invalid ID..."<<endl; //error 2 times invalid
                    }
                }

                    break;
            }

    }
    goto b;

    return 0;
}
