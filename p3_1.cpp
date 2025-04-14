#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
    char name[20];
    int BasicSalary;
    int Bonus;


public:
    Employee(char n[],int salary,int b=1000)
    {
        strcpy(name,n);
        BasicSalary=salary;
        Bonus=b;
    }
    inline int TotalSalary()
    {
        return BasicSalary+Bonus;
    }
    void DisplayData()
    {
        cout<<"Employee name:"<<name<<endl;
        cout<<"Employee basic salary:"<<BasicSalary<<endl;
        cout<<"Employee bonus:"<<Bonus<<endl;
        cout<<"Employee total salary:"<<TotalSalary()<<endl;
    }
};

int main()
{
    Employee E;//error
    char name[20];
    int salary;
    int bonus;
    int choice;
    B:
    cout<<"Enter '1' for add employee data"<<endl;
    cout<<"Enter '2' for display employee data"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
            cout<<"Enter employee name:";
            cin>>name;
            cout<<"Enter employee salary:";
            cin>>salary;
            cout<<"Enter employee bonus if he/she got specific bonus otherwise enter 0 for default bonus:";
            cin>>bonus;
            Employee(name,salary,bonus);
            break;
        }
    case 2:
        {
            E.DisplayData();
            break;
        }
    }
    goto B;
    return 0;

}
