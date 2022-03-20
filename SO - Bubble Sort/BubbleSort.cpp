#include <iostream>

using namespace std;

// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are out of wrong order.

void swap(int*, int*);
void bubbleSort(int*, int);
void recursiveBubbleSort(int* arr, int size);

int main (void){
    int size;
    cout << "\nEnter the size of the Array : ";
    cin >> size;

    int *array = new int[size];
    


    cout << "\nEnter the Array of " << size << " numbers to be sorted: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    //bubbleSort(array, size);
    recursiveBubbleSort(array, size);
    cout << "\nThe Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }



    delete[] array;
    return 0;
}
void swap(int* x, int* y){
    int z = *x;
    *x = *y;
    *y = z;
}
void bubbleSort(int* arr, int size){
    bool isSorted = false;
    while (!isSorted){
        isSorted = true;
        for(int i = 0; i < size - 1; i++){
            if(arr[i] > arr[i + 1]){
                swap(arr[i], arr[i + 1]);
                isSorted  = false;
            }
        }
            size--;
    }
}
void recursiveBubbleSort(int* arr, int size){
    if (size == 1){
        return;
    }
    for (int i = 0; i < size - 1; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i], arr[i + 1]);
        }
    }
    recursiveBubbleSort(arr, size - 1);
}