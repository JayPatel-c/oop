#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
    int ID;
    string name;
    int BasicSalary;
    int Bonus;
    
    inline int TotalSalary()
    {
        return BasicSalary+Bonus;
    }

public:
    
    Employee()
    {
        ID=0;
        name = "N/A";
        BasicSalary=0;
        Bonus=1000;
    }

    Employee(int id,char n[],int salary,int b=1000)
    {
        ID=id;
        name=n;
        BasicSalary=salary;
        Bonus=b;
    }
    void DisplayData()
    {
        cout << "\n================= Employee Details =================" << endl;
        cout << "ID            : " << ID << endl;
        cout << "Name          : " << name << endl;
        cout << "Basic Salary  : " << BasicSalary << endl;
        cout << "Bonus         : " << Bonus << endl;
        cout << "Total Salary  : " << TotalSalary() << endl;
        cout << "===================================================="<<endl << endl;
    }


    int getID()
    {
        return ID;
    }
};

int main()
{
    Employee E[20];
    char name[20];
    int ID;
    int salary;
    int bonus;
    int choice;
    int FindID;
    int NumEmpl=0,addedEmpl=0;
    bool flag=false;
    B:
    cout << "\n================ Employee Management System ================"<<endl;
    cout << "1. Add Employee Data"<<endl;
    cout << "2. Display Employee Data"<<endl;
    cout << "3. Exit"<<endl;
    cout << "============================================================"<<endl;
    cout << "Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
    case 1:
    {
        cout << "Enter number of employees to add (max remaining: " << 20 - addedEmpl << "): ";
        cin >> NumEmpl;

        if (NumEmpl + addedEmpl > 20)
        {
            cout << "You can't add more than 20 employees total!" << endl;
            break;
        }
        for (int i = 0; i < NumEmpl; i++)
        {
        cout<<"\nEnter employee ID:";
        cin>>ID;
        cout<<"Enter employee name:";
        cin>>name;
        cout<<"Enter employee salary:";
        cin>>salary;
        cout<<"Enter employee bonus if he/she got specific bonus otherwise enter 0 for default bonus:";
        cin>>bonus;
        if(bonus==0)
        {
            E[addedEmpl]=Employee(ID,name,salary);  
        }
        else
        {
            E[addedEmpl]=Employee(ID,name,salary,bonus);  
        }
        addedEmpl++;
        }    
    }
        break;
        
    case 2:
    {
        cout << endl<<"Enter employee ID for display:";
        cin >> FindID;
        flag=false;
        for (int i = 0; i < addedEmpl; i++)
        {
            if (E[i].getID() == FindID)
            {
                flag=true;
                E[i].DisplayData();
                break;
            }            
        }
            if(!flag)
            {
                cout << "Employee not found!"<<endl;
            }
            break;
    }
    case 3:
    {
        cout<<"Thank you,Exit.";
        return 0;
    }
    default:
    {
        cout << "Invalid choice.Enter valid choice"<<endl;
    }
}
goto B;
}
