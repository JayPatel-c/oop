#include<iostream>
using namespace std;
class ManagementSystem
{
    int id,quantity=0;
    char name[20];
    float price;
    public:

    void AddProduct()
    {
    cout<<"Enter ID:";
    cin>>id;
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter price:";
    cin>>price;
    cout<<"Quantity : "<<quantity++<<endl;
    }

    void UpdateQuantity(int ID)
    {
    if(ID==id)
    {
    quantity++;
    cout<<"Quantity : "<<quantity<<endl;
    }
    }

    void total(int ID)
    {
    if(ID==id)
    {
    int total;
    total=quantity*price;
    cout<<"Total: "<<total<<endl;
    }
    }
};
int main()
{
   ManagementSystem M;
   int i,j,findID;
   cout<<"Enter the no. of products that you want to add:";
   cin>>j;
   for(i=0;i<j;i++)
   {
   M.AddProduct();
   }
   cout<<"Enter the Id to find:";
   cin>>findID;
   for(i=0;i<j;i++)
   {
   M.UpdateQuantity(findID);
   break;
   }
   cout<<"Enter the Id to find:";
   cin>>findID;
   for(i=0;i<j;i++)
   {
   M.total(findID);
   }
}
