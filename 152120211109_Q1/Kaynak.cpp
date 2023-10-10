#include <iostream>
using namespace std;

void generateArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(0));

    int m;
    cout << "Enter the value of 'm': ";
    cin >> m;

    int* arr = new int[m];


    clock_t startTime = clock();


    generateArray(arr, m);
    cout << "Generated array: ";
    displayArray(arr, m);


    clock_t endTime = clock();


    double elapsedTime = double(endTime - startTime) / CLOCKS_PER_SEC;
    cout << "Elapsed time: " << elapsedTime << " seconds" << endl;


    delete[] arr;

    return 0;
}
