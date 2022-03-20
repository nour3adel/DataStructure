#pragma once
template <class T>
class Node
{
public:
	T value;
	Node<T>* left, *right;
	
	Node();
	Node(T val);
};
