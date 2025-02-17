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
        marks[0] = 0;
        marks[1] = 0;
        marks[2] = 0;

    }


    Student(int roll, string studentName, int m1, int m2, int m3) {
        rollNumber = roll;
        name = studentName;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }




    void displayDetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
        cout << "Average Marks: " << calculateAverage() << endl;
    }

    float calculateAverage() {
        return (marks[0] + marks[1] + marks[2]) / 3.0f;
    }
};

int main() {
    Student student1;

    cout << "\n--- Default Student Record ---" << endl;
    student1.displayDetails();

    int roll;
    string name;
    int m1, m2, m3;

    cout << "Enter student details:" << endl;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks for 3 subjects: ";
    cin >> m1 >> m2 >> m3;


    Student student2(roll, name, m1, m2, m3);

    cout << "\n--- Student Record ---" << endl;
    student2.displayDetails();

    return 0;
}
