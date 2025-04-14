#include<iostream>
using namespace std;

int CalculateSumOfDigits(int Number) {
    int Sum = 0;
    while(Number > 0) {
        Sum += Number % 10;
        Number /= 10;
    }
    return Sum;
}

int CalculateSuperDigit(int Number) {
    if(Number < 10) {
        return Number;
    }
    int Sum = 0;
    while(Number > 0) {
        Sum += Number % 10;
        Number /= 10;
    }
    return CalculateSuperDigit(Sum);
}

int main() {
    int Num, k;
    cout << "Enter number: ";
    cin >> Num;
    cout << "Enter the number of repetitions: ";
    cin >> k;

    int Sum = CalculateSumOfDigits(Num);
    int TotalSum = Sum * k;
    int SuperDigit = CalculateSuperDigit(TotalSum);

    cout << "Super digit: " << SuperDigit << endl;

    return 0;
}
