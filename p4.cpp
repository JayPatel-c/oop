#include<iostream>
using namespace std;

class Inventory
{
    int ID;
    char Name[20];
    float Price;
    int Quantity;

public:

    void AddItemDetails()
    {
        cout << "\n--- Add New Item ---\n";
        cout << "Enter item ID       : ";
        cin >> ID;
        cout << "Enter item's name   : ";
        cin >> Name;
        cout << "Enter price of item : ";
        cin >> Price;
        Quantity = 1;
        cout << "Item added successfully!\n";
        cout << "----------------------------\n";
    }

    int GetID()
    {
        return ID;
    }

    void IncreaseQuantity()
    {
        int NewQuantity;
        cout << "\n--- Increase Quantity ---\n";
        cout << "Enter quantity to be increased: ";
        cin >> NewQuantity;

        Quantity += NewQuantity;
        cout << "Item's Quantity is successfully increased!\n";
        cout << "----------------------------\n";
    }

    void DecreaseQuantity()
    {
        int NewQuantity;
        cout << "\n--- Decrease Quantity ---\n";
        cout << "Enter quantity to be decreased: ";
        cin >> NewQuantity;

        if (Quantity >= NewQuantity)
        {
            Quantity -= NewQuantity;
            cout << "Item's Quantity is successfully decreased!\n";
        }
        else
        {
            cout << "Insufficient quantity for decrement!\n";
        }
        cout << "----------------------------\n";
    }

    void DisplayItemDetails()
    {
        cout << "\n--- Item Details ---\n";
        cout << "ID       : " << ID << endl;
        cout << "Name     : " << Name << endl;
        cout << "Price    : " << Price << endl;
        cout << "Quantity : " << Quantity << endl;
        cout << "----------------------------\n";
    }
};

int main()
{
    Inventory I[100];
    int NumItem = 0;
    bool flag=false;
    int FindID, Choice;

    next:
    cout << "\n======= INVENTORY MENU =======\n";
    cout << "1. Add Item.\n";
    cout << "2. Increase Quantity.\n";
    cout << "3. Decrease Quantity.\n";
    cout << "4. Display Item Details.\n";
    cout << "5. Exit.\n.";
    cout << "==============================\n";
    cout << "Enter your choice: ";
    cin >> Choice;

    switch(Choice)
    {
    case 1:
        {
        I[NumItem].AddItemDetails();
        NumItem++;
        break;
        }
    case 2:
    {
        cout << "\nEnter item ID to increase quantity: ";
        cin >> FindID;
        for (int i = 0; i < NumItem; i++)
        {
            if (I[i].GetID() == FindID)
            {
                flag=true;
                I[i].IncreaseQuantity();
            }
        }
        if(!flag)
        {
        cout << "Item not found!\n";
        }
        break;
    }
    case 3:
    {
        cout << "\nEnter item ID to decrease quantity: ";
        cin >> FindID;
        for (int i = 0; i < NumItem; i++)
        {
            if (I[i].GetID() == FindID)
            {
                flag=true;
                I[i].DecreaseQuantity();
            }
        }
        if(!flag)
        {
        cout << "Item not found!\n";
        }
        break;
    }
    case 4:
    {
        cout << "\nEnter item ID to display details: ";
        cin >> FindID;
        for (int i = 0; i < NumItem; i++)
        {
            if (I[i].GetID() == FindID)
            {
                flag=true;
                I[i].DisplayItemDetails();
            }
        }
        if(!flag)
        {
        cout << "Item not found!\n";
        }
        break;
    }

    case 5:
        {
        cout << "\nThank you for using Inventory System!" << endl;
        return 0;
        }
    default:
    {
    cout << "Invalid choice. Please enter 1 or 5.\n";
    }
}
    goto next;
}