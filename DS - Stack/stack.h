#pragma once

template <class dataType>
class Stack
{
    private:
    dataType* arr;
    int elements;
    int size;

    public:
    Stack(int);
    void push(dataType);                    // Adds an element to the top of the stack.
    void pop();                             // Removes an elements from the top of the stack.
    int length();                           // Returns the number of elements in the stack.
    dataType top();                         // Returns the element at the top of the stack.
    bool isEmpty();                         // Returns true if the stack is empty.
    void expand();                          // Doubles the size of the stack.
    ~Stack();                               // Frees memory allocated for the stack.
};