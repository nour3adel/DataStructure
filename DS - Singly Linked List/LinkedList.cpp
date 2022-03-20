#pragma once
#include "Node.h"
#include "LinkedList.h"
#include <assert.h>

template <class dataType>
LinkedList<dataType>::LinkedList()
{
    count = 0;
    head = tail = nullptr; 
}

template <class dataType>
int LinkedList<dataType>::length()
{
    return count;
}

template <class dataType>
void LinkedList<dataType>::append(dataType value)
{
    Node<dataType>* node = new Node<dataType>(value);
    if (isEmpty()){
        head = tail = node;
    }
    else{
        tail->next = node;
        tail = node;
    }
    count++;
}

template <class dataType>
void LinkedList<dataType>::insertAt(int index, dataType val){
    Node<dataType>* node = new Node<dataType>(val);
    Node<dataType>* temp = head;

    if (index == 0){
        node->next = head;
        head = node;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            temp = temp->next;
        node->next = temp->next;
        temp->next = node;
    }
    count++;
}

template <class dataType>
dataType LinkedList<dataType>::at(int index)
{
    assert(index >= 0 && index < count);
    Node<dataType>* temp = head;
    for (int i = 0; i < index; i++)
        temp = temp->next;
    return temp->value;
}

template <class dataType>
bool LinkedList<dataType>::isEmpty()
{
    return (count == 0);
}

template <class dataType>
void LinkedList<dataType>::deleteFrom(int index)
{
    Node<dataType>* temp0 = head;
    if (index == 0){
        head = head->next;
        delete temp0;
    }
    else{
        for (int i = 0; i < index - 1; i++)
                temp0 = temp0->next;
        Node<dataType>* temp1 = temp0->next;
        temp0->next = temp1->next;
        delete temp1;
        if (index == count - 1){
            tail = temp0;
        }
    }
    count--;
}

template <class dataType>
LinkedList<dataType>::~LinkedList()
{
}
