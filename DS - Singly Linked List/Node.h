#pragma once

template <class dataType>
class Node
{
    public:
    Node<dataType>* next;
    dataType value;
    
    public:
    Node();
    Node(dataType);
};
