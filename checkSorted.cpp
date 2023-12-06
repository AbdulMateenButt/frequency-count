#include<iostream>
using namespace std;

int sorting(int* arr, int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[i]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void frequencyCalculator(int* arr, int size) {
    sorting(arr, size);
    int count = 1;
    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            cout << "Frequency of " << arr[i - 1] << " is: " << count << endl;
            count = 1;  // Reset count for the next element
        }
    }
    // Handle the frequency of the last element
    cout << "Frequency of " << arr[size - 1] << " is: " << count << endl;
}

void display() {
    int size = 5;
    int arr[size];
    cout << "Enter Array Elements: " << '\n';
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    frequencyCalculator(arr, size);
}

int main() {
    display();
    return 0;
}
