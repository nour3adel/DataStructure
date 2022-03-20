#include <iostream>

using namespace std;

/* Merge sort algorithm sorts an array by dividing the input array into two halves,
     calls itself for the two halves, and then merges the two sorted halves. */

void merge (int* arr, int l, int m, int r);
void mergeSort(int* arr, int left, int right);
int main (void){

    int size;
    cout << "\nEnter the size of the Array : ";
    cin >> size;

    int *array = new int[size];
    
    cout << "\nEnter the Array of " << size << " numbers to be sorted: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

  
    mergeSort(array, 0, size - 1);
    cout << "\nThe Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    delete[] array;
    return 0; 
}
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
 
    // Create temporary arrays.
    int* L = new int[n1];
    int* R = new int[n2];
 
    // Copy data to temp arrays L[] and R[].
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    // Merge the temporary arrays back into one array.
 
    // Initial index of first subarray
    int i = 0;
 
    // Initial index of second subarray
    int j = 0;
 
    // Initial index of merged array
    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    // Copy the remaining elements of L[].
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    // Copy the remaining elements of R[].
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}
 
void mergeSort(int arr[],int l,int r){
    // Base Case.
    if(l >= r){
        return;
    }
    int m = (l+r-1)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}