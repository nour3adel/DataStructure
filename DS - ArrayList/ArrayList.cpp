#include "ArrayList.h"
#include <assert.h>
#include <iostream>

using namespace std;

template <class dataType>
ArrayList<dataType>::ArrayList(int val)
{
    count = 0;
    size = val;
    arr = new dataType[size];
}

template <class dataType>
int ArrayList<dataType>::length()
{
    return count;
}

template <class dataType>
void ArrayList<dataType>::append(dataType value)
{
    if(isFull())
        expand();

    arr[count] = value;
    count++;
}

template <class dataType>
dataType ArrayList<dataType>::at(int index)
{
    assert(index >= 0 && index < count); 
    return arr[index];
} 

template <class dataType>
void ArrayList<dataType>::display()
{
    for (int i = 0; i < count; i++){
        cout << arr[i] << endl;
    }
}

template <class dataType>
void ArrayList<dataType>::expand()
{
    dataType* temp = new dataType[size * 2];
    for (int i = 0; i < size; i++){
        temp[i] = arr[i];
    }
    size = size * 2;
    delete [] arr;
    arr = temp;
}

template <class dataType>
bool ArrayList<dataType>::isFull()
{
    return (size == count);
}

template <class dataType> 
void ArrayList<dataType>::deleteFrom(int index)
{
    assert(index >= 0 && index < count);
    for (int i = index; i < count - 1; i++){
        arr[i] = arr[i + 1];
    }

    count--;
}


template <class dataType> 
void ArrayList<dataType>::insertAt(int index, dataType value)
{
    assert(index >= 0 && index < count);
    
    if (isFull())
        expand();
    
    for (int i = count; i > index; i--){
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    count++;

}

template <class dataType> 
ArrayList<dataType>::~ArrayList()
{
    delete [] arr;
}
