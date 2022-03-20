#include "Node.h"

template <class T>
Node<T>::Node()
{
	left=right=NULL;
}

template <class T>
Node<T>::Node(T val)
{
	value=val;
	left=right=NULL;
}
