#pragma once

template <class dataType>
class Queue
{
private:
    dataType* arr;
    int count;
    int size;
    int front;
    int back;
public:
    Queue(int val);
    void Enqueue(dataType);                     // Adds an element to the end of the queue.
    void Dequeue();                             // Removes the element at the front of the queue.
    dataType Front();                           // Returns the element at the front of the queue.
    int length();                               // Returns the number of elements in the queue.
    bool isEmpty();                             // Returns true if the queue is empty.
    bool isFull();                              // Returns true if the queue is full.
    ~Queue();                                   // Frees memory allocated for the stack.
};
