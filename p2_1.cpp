#include<iostream>
using namespace std;

class PlotData {
    int length, width, area, perimeter;

public:
    void AddData() {
        cout << "Enter length : ";
        cin >> length;
        cout << "Enter width : ";
        cin >> width;
        area = length * width;
        perimeter = 2 * (length + width);
    }

    void UpdateData() {
        cout << "Enter new length : ";
        cin >> length;
        cout << "Enter new width : ";
        cin >> width;
        area = length * width;
        perimeter = 2 * (length + width);
    }

    void DisplayData() {
        cout << "--------------------------" << endl;
        cout << "Length: " << length
             << "\nWidth: " << width
             << "\nArea: " << area
             << "\nPerimeter: " << perimeter << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    PlotData P[20];
    int choice, NumPlot = 0, i;
    bool flag=false;
    next:
    cout << "\n--- MENU ---" << endl;
    cout << "1. Add Data" << endl;
    cout << "2. Update Data" << endl;
    cout << "3. Display Data" << endl;
    cout << "4. Exit." << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            if (NumPlot < 20) {
                P[NumPlot].AddData();
                NumPlot++;
            } else {
                cout << "Maximum plot limit reached!" << endl;
            }
            break;

        case 2:
            cout << "Enter Plot No. to update (1 to " << NumPlot << "): ";
            cin >> i;
            
            if (i >= 1 && i <= NumPlot) {
                P[i - 1].UpdateData();
            } else {
                cout << "Enter a valid Plot number..." << endl;
            }
            break;

        case 3:
            cout << "Enter Plot No. to display (1 to " << NumPlot << "): ";
            cin >> i;
            if (i >= 1 && i <= NumPlot) {
                P[i - 1].DisplayData();
            } else {
                cout << "Enter a valid Plot number..." << endl;
            }
            break;
        case 4:
        {
            cout<<"Thank you,exit.";
            return 0;
        }
        default:
         cout << "Invalid choice. Please enter 1 or 4.\n";
    }
    goto next;
}
