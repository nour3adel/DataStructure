#include <iostream>

using namespace std;

/* Selection sort algorithm sorts an array by repeatedly finding the minimum element 
    from unsorted part and putting it at the beginning. */

void selectionSort(int*, int);

int main (void){

    int size;
    cout << "\nEnter the size of the Array : ";
    cin >> size;

    int *array = new int[size];
    
    cout << "\nEnter the Array of " << size << " numbers to be sorted: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

  
    selectionSort(array, size);
    cout << "\nThe Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    delete[] array;
     return 0;
}
void selectionSort(int* arr, int size){
    int minIndex;
    for (int i = 0; i < size - 1; i++){
        minIndex = i;
        for (int j = i + 1; j < size; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = arr[j];
            }
        }
        swap(arr[i], arr[minIndex]);
    }



}