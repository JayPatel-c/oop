#include<iostream>
#include<math.h>
using namespace std;

class LoanAccount {
    int loanID;
    char name[20];
    long LoanAmount;
    float InterestRate;
    float LoanTenure;
    double EMI;
    float AnnualRate;

    void CalculateEMI() {
        InterestRate = AnnualRate / 12 / 100;
        EMI = ((LoanAmount * InterestRate * pow((1 + InterestRate), LoanTenure)) /
               (pow((1 + InterestRate), LoanTenure) - 1));
    }

public:
    void AddDetails() {
        cout << endl<<"----- Enter Loan Account Details -----"<<endl;
        cout << "Enter Loan ID            : ";
        cin >> loanID;
        cout << "Enter Name               : ";
        cin >> name;
        cout << "Enter Loan Amount        : ";
        cin >> LoanAmount;
        cout << "Enter Annual Interest (%) : ";
        cin >> AnnualRate;
        cout << "Enter Loan Tenure (months): ";
        cin >> LoanTenure;
        CalculateEMI();
        cout << "Account details added successfully!"<<endl;
    }

    void DisplayData() {
        cout << endl<<"========== Loan Account Details =========="<<endl;
        cout << "Loan ID        : " << loanID << endl;
        cout << "Name           : " << name << endl;
        cout << "Loan Amount    : " << LoanAmount << endl;
        cout << "Annual Rate    : " << AnnualRate << "%" << endl;
        cout << "Loan Tenure    : " << LoanTenure << " months" << endl;
        cout << "Monthly EMI    : " << EMI << endl;
        cout << "=========================================="<<endl;
    }

    int getID() {
        return loanID;
    }
};

int main() 
{
    LoanAccount A[20];
    bool flag=false;
    int numAcc = 0;
    int choice;

b:
    cout << endl<<"========== Loan Management Menu =========="<<endl;
    cout << "1. Add Account Details"<<endl;
    cout << "2. Display Account Details by ID"<<endl;
    cout << "3. Exit."<<endl;
    cout << "Enter your choice (1 or 3): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            A[numAcc].AddDetails();
            numAcc++;
            break;

        case 2:
        {
            int checkID;
            cout << endl<<"Enter Loan ID to display details: ";
            cin >> checkID;

            for (int i = 0; i < numAcc; i++) 
            {
                if (A[i].getID() == checkID) 
                {
                    flag=true;
                    A[i].DisplayData();
                    break;
                }
                if(!flag)
                {
                cout << "Item not found!"<<endl;
                }
                break;
            }
        }

        case 3:
        {
            cout<<"Exit,Thank you."<<endl;
            return 0;
        }
        default:
            cout << "Invalid choice. Please enter 1 or 3."<<endl;
    }
    goto b;
}
