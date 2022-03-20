#include "Node.h"

template <class dataType>
Node<dataType>::Node(){
    value = 0;
    next = nullptr;
}

template <class dataType>
Node<dataType>::Node(dataType val){
    value = val;
    next = nullptr;
}