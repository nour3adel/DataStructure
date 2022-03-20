#include "Stack.h"
#include <assert.h>

template <class dataType>
Stack<dataType>::Stack(int val){
    elements = 0;
    size = val;
    arr = new dataType[size];
} 

template <class dataType>
int Stack<dataType>::length(){
    return elements;
}

template <class dataType>
bool Stack<dataType>::isEmpty(){
    return (elements == 0);
}

template <class dataType>
void Stack<dataType>::expand(){
    dataType* temp = new dataType[size * 2];
    for (int i = 0; i < size; i++){
        temp[i] = arr[i];
    }
    size = size * 2;
    delete [] arr;
    arr = temp;
}

template <class dataType>
void Stack<dataType>::push(dataType num){
    if (elements == size)
        expand();
    arr[elements] = num;
    elements++;
}

template <class dataType>
void Stack<dataType>::pop(){
    assert(!isEmpty());             // Throw an exception if the stack is empty (conidtion == false).
    elements--;
}

template <class dataType>
dataType Stack<dataType>::top(){
    assert(!isEmpty());             // Throw an exception if the stack is empty (conidtion == false).
    return arr[elements - 1];
}

template <class dataType>
Stack<dataType>::~Stack(){
    delete [] arr;
}
