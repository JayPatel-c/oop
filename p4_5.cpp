//This program is prepared by 24CE081_Jay Patel
#include<iostream>
#include<string>
using namespace std;
class GradingFramework
{
    protected:
    string name;
    float m1,m2,m3;
    public:
    virtual void InsertData()=0;
    virtual void Calculate()=0;
    virtual void Display()=0;

};
class UGstudents : public GradingFramework
{
    public:
    void InsertData() override
    {
        cout<<"Enter the name of student : ";
        cin>>name;
        cout<<"Enter the marks of 3 subjects : ";
        cin>>m1>>m2>>m3;
    }
    void Calculate() override
    {
        cout<<"The average of 3 subjects : "<<(m1+m2+m3)/3<<endl;
    }
    void Display() override
    {
        cout<<"------------------------------------------------"<<endl;
        cout<<"The name of student : "<<name<<endl;
        cout<<"The marks of 3 subjects : "<<m1<<","<<m2<<","<<m3<<endl;
        if ((m1+m2+m3)/3>=40)
        {
            cout<<"The student is pass"<<endl;
        }
        else
        {
            cout<<"The student is fail"<<endl;
        }
    }
};
class PGstudents : public GradingFramework
{
    public:
    void InsertData() override
    {
        cout<<"Enter the name of student : ";
        cin>>name;
        cout<<"Enter the marks of 3 subjects : ";
        cin>>m1>>m2>>m3;
    }
    void Calculate() override
    {
        cout<<"The average of 3 subjects : "<<(m1+m2+m3)/3<<endl;
    }
    void Display() override
    {
        cout<<"The name of student : "<<name<<endl;
        cout<<"The marks of 3 subjects : "<<m1<<","<<m2<<","<<m3<<endl;
        if ((m1+m2+m3)/3>=50)
        {
            cout<<"The student is pass"<<endl;
        }
        else
        {
            cout<<"The student is fail"<<endl;
        }
    }
};
int main()
{
    UGstudents u;
    PGstudents p;
    GradingFramework *g1,*g2;
    g1=&u;
    g2=&p;
    int n;
    cout<<"Enter 1 for UG student and 2 for PG student : ";
    cin>>n;
    if (n==1)
    {
        g1->InsertData();
        g1->Calculate();
        g1->Display();
    }
    else if (n==2)
    {
        g2->InsertData();
        g2->Calculate();
        g2->Display();
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }
   

    return 0;
}