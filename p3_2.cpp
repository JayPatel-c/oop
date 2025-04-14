#include <iostream>
using namespace std;


int RecursiveSum(int arr[], int n) {
    if (n <= 0)
        return 0; 
    return RecursiveSum(arr, n - 1) + arr[n - 1];
}

int IterativeSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int sumRec = RecursiveSum(arr, size);
    int sumIter = IterativeSum(arr, size);

    cout << "\n=== Result ===\n";
    cout << "Recursive Sum: " << sumRec << endl;
    cout << "Iterative Sum: " << sumIter << endl;

   
    delete[] arr;

    return 0;
}
