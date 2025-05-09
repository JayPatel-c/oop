#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX_STUDENTS = 100;

char calculateGrade(float mark) {
    if (mark >= 90)
        return 'A';
    else if (mark >= 80)
        return 'B';
    else if (mark >= 70)
        return 'C';
    else if (mark >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    string names[MAX_STUDENTS];
    float marks1[MAX_STUDENTS], marks2[MAX_STUDENTS], marks3[MAX_STUDENTS];
    float tuitionFees[MAX_STUDENTS];
    char grade1[MAX_STUDENTS], grade2[MAX_STUDENTS], grade3[MAX_STUDENTS];
    int studentCount = 0;

    char moreStudents;

    do {
        if (studentCount >= MAX_STUDENTS) {
            cout << "Reached maximum student limit!" << endl;
            break;
        }

        cout << "Enter student's name: ";
        getline(cin>>ws, names[studentCount]);

        cout << "Enter marks for Subject 1: ";
        cin >> marks1[studentCount];
        cout << "Enter marks for Subject 2: ";
        cin >> marks2[studentCount];
        cout << "Enter marks for Subject 3: ";
        cin >> marks3[studentCount];

        cout << "Enter tuition fee: ";
        cin >> tuitionFees[studentCount];

        grade1[studentCount] = calculateGrade(marks1[studentCount]);
        grade2[studentCount] = calculateGrade(marks2[studentCount]);
        grade3[studentCount] = calculateGrade(marks3[studentCount]);

        studentCount++;

        cout << "\nDo you want to enter another student? (y/n): ";
        cin >> moreStudents;

    } while (moreStudents == 'y' || moreStudents == 'Y');

    ofstream outfile("students.txt");

    if (!outfile) {
        cout << "Error: Unable to create output file!" << endl;
        return 1;
    }

    // File Header
    outfile << left << setw(20) << "Name"
            << setw(10) << "Grade1"
            << setw(10) << "Grade2"
            << setw(10) << "Grade3"
            << setw(15) << "Tuition Fee" << endl;

    outfile << setfill('-') << setw(65) << "-" << setfill(' ') << endl;

    for (int i = 0; i < studentCount; ++i) {
        outfile << left << setw(20) << names[i]
                << setw(10) << grade1[i]
                << setw(10) << grade2[i]
                << setw(10) << grade3[i]
                << setw(14) << fixed << setprecision(2) << tuitionFees[i]
                << endl;
    }

    outfile.close();

    cout << "\nStudent report generated successfully in 'students.txt'!" << endl;

    return 0;
}
