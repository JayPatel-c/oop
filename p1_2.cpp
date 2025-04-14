#include<iostream>

using namespace std;

class ManagementSystem
{
    char name[20];
    int ID;
    int quantity = 1;
    float price;

public:

    void AddProduct()
    {
        cout << "--------------------------" << endl;
        cout << "Enter ID : ";
        cin >> ID;
        cout << "Enter name : ";
        cin >> name;
        cout << "Quantity : " << quantity << endl;
        cout << "Enter price : ";
        cin >> price;
        cout << "--------------------------" << endl;
    }

    int getID()
    {
        return ID;
    }

    void UpdateQuantity()
    {
        int UpdatedQuantity;
        cout << "Enter the product quantity for update : ";
        cin >> UpdatedQuantity;
        quantity += UpdatedQuantity;
        cout << "Updated Quantity : " << quantity << endl;
        cout << "--------------------------" << endl;
    }

    int Total()
    {
        return quantity * price;
    }

    void DisplayProduct()
    {
        cout << "--------------------------" << endl;
        cout << "Product ID : " << ID << endl;
        cout << "Product Name : " << name << endl;
        cout << "Product Quantity : " << quantity << endl;
        cout << "Product total price : " << Total() << endl;
        cout << "--------------------------" << endl;
    }
};

int main()
{
    ManagementSystem M[50];
    bool flag = false;
    int choice, Product = 0, findID;
    next:
    cout << "Enter '1' for Add Product , "<<endl 
        << "Enter '2' for Update Quantity , "<<endl
        << "Enter '3' for Display Product details , "<<endl
        << "Enter '4' for Display total bill ."<<endl
        << "Enter '5' for Exit ."<<endl
        <<"Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            M[Product].AddProduct();
            Product++;
            break;
        }
        case 2:
        {
            cout << "Enter product ID for check : ";
            cin >> findID;
            for (int i = 0; i < Product; i++)
            {
                if(M[i].getID() == findID)
                {
                    flag=true;
                    M[i].UpdateQuantity();
                    break;
                }
            }
            if(!flag)
            { 
                cout << "Enter valid ID." << endl;
            }
            break;
        }
        
        case 3:
        {
            cout << "Enter product ID for check : ";
            cin >> findID;
            for (int i = 0; i < Product; i++)
            {
                if(M[i].getID() == findID)
                {
                    flag = true;
                    M[i].DisplayProduct();
                    break;
                }
                
            }
            if(!flag)
            { 
                cout << "Enter valid ID." << endl;
            }
            break;  
        }

        case 4:
        {
            float totalBill=0;
            for (int i = 0; i < Product; i++)
            {
                M[i].DisplayProduct();
                totalBill += M[i].Total();
            }
            cout << "Total Bill Amount: " << totalBill << endl<<endl;
            break;
        }
        case 5:
        {
            cout<<"Thank you, Exit.";
            return 0;
        }
        default:
            cout << "Invalid choice, try again." << endl;
    }
    goto next;
}
