#include <iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        Person(){};
        Person(string name1,int age1)
        {
            name=name1;
            age=age1;
        }
        void displayPerson()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};

class Employee: public Person{
    protected:
        int EmployeeID;
    public:
        Employee():Person(){};
        Employee(string name1,int age1,int empId):Person(name1,age1){
            EmployeeID=empId;
        }
        void displayEmployee()
        {
            displayPerson();
            cout<<"Employee ID: "<<EmployeeID<<endl;
        }
};

class Manager: public Employee{
    protected:
        string Department;
    public:
        Manager():Employee(){};
        Manager(string name1,int age1,int empId,string dep):Employee(name1,age1,empId){
            Department=dep;
        }
        void displayManager()
        {
            displayEmployee();
            cout<<"Department: "<<Department<<endl;
        }
};

int main()
{
    string name1,dep;
    int age1,empId;

    int i,choice,count=0;
    Manager* Emp[15];

    program:
          cout<<"Enter name: ";
          cin>>name1;
          cout<<"Enter age: ";
          cin>>age1;
          cout<<"Enter employee Id: ";
          cin>>empId;
          cout<<"Enter Department: ";
          cin>>dep;

          Emp[count] = new Manager(name1,age1,empId,dep);
          count++;

          cout<<"Do you want to add more Employee?(1 for yes/0 for no)\n";
          cout<<"Enter your choice: ";
          cin>>choice;

          if(choice!=1)
          {
            cout<<"Displaying details of employee\n"<<endl;
            for(i=0;i<count;i++)
            {
                cout<<"EMPLOYEE "<<i+1<<endl;
                Emp[i]->displayManager();
            }
            return 0;
          }

          else{
            goto program;
          }
          return 0;
}