#include <iostream>

using namespace std;

/* Linear Search algorithm, that returns the index of a target number in
    a given array [left, right] if it's present, otherwise it returns -1. */ 

int LinearSearch(int *array, int size, int target);

int main() {
    int size;
    cout << "\nEnter the size of the Array : ";
    cin >> size;

    int *array = new int[size];
    int target;


    cout << "\nEnter the Array of " << size << " numbers : ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << "\nEnter the number to be searched : ";
    cin >> target;

    int index = LinearSearch(array, size, target);
    if (index != -1) {
        cout << "\nNumber found at index : " << index + 1;
    } else {
        cout << "\nNumber not found.";
    }

    delete[] array;
    return 0;

}int LinearSearch(int *array, int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}
