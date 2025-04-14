#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    int marks[3];

public:
    Student() {
        rollNumber = 0;
        name = "N/A";
        marks[0] = marks[1] = marks[2] = 0;
    }

    Student(int roll, string studentName, int m1, int m2, int m3) {
        rollNumber = roll;
        name = studentName;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    void displayDetails() {
        cout << "------------------------------------" << endl;
        cout << "Roll Number   : " << rollNumber << endl;
        cout << "Name          : " << name << endl;
        cout << "Subject Marks : " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
        cout << "Average Marks : " << calculateAverage() << endl;
        cout << "------------------------------------" << endl;
    }

    float calculateAverage() {
        return (marks[0] + marks[1] + marks[2]) / 3.0f;
    }
};

int main() {
    Student student1[100];
    int choice, NoStudent = 0;
    next:
        cout << "\n=========== MENU ===========\n";
        cout << "1. Show default student record\n";
        cout << "2. Add student records\n";
        cout << "3. Display all student records\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\n--- Default Student Record ---\n";
                student1[0].displayDetails();
                break;
            }

            case 2: {
                cout << "\nEnter the number of students you want to add (1 to 100): ";
                cin >> NoStudent;

                if (NoStudent > 100 || NoStudent < 1) {
                    cout << "Invalid input. Please enter a number between 1 and 100.\n";
                    break;
                }

                for (int i = 0; i < NoStudent; i++) {
                    int roll, m1, m2, m3;
                    string name;

                    cout << "\n--- Enter details for Student " << (i + 1) << " ---\n";
                    cout << "Roll Number      : ";
                    cin >> roll;
                    cout << "Name             : ";
                    cin >> name;
                    cout << "Marks (m1 m2 m3) : ";
                    cin >> m1 >> m2 >> m3;

                    student1[i] = Student(roll, name, m1, m2, m3);
                }
                break;
            }

            case 3: {
                if (NoStudent == 0) {
                    cout << "\n No student records available. Please add students first.\n";
                } else {
                    cout << "\n=== Displaying Student Records ===\n";
                    for (int i = 0; i < NoStudent; i++) {
                        cout << "\nStudent " << (i + 1) << ":" << endl;
                        student1[i].displayDetails();
                    }
                }
                break;
            }

            case 4: {
                cout << "\nExiting program. Goodbye!\n";
                return 0;
            }

            default:
                cout << "\n Invalid choice. Please select between 1 and 4.\n";
    }
    goto next;
}
