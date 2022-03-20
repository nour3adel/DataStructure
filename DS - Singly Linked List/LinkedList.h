#pragma once
#include "Node.h"

template <class dataType>
class LinkedList
{
    public:
    int count;
    Node<dataType>* head;
    Node<dataType>* tail;
    
    public:
    LinkedList();
    int length();
    dataType at(int);
    void insertAt(int, dataType);
    void deleteFrom(int);
    void append(dataType);
    bool isEmpty();
    ~LinkedList();
};
