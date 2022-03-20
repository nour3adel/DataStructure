#pragma once
#include "Node.h"

template <class T>
class BSTree
{

	Node<T>* root;

	public:
	BSTree(void);
	bool contains(T val);									// Returns True if a certain value is in the tree.
	Node<T>* findNode(T val);								// Returns a pointer to a certain value if it's found in the tree.
	void insert(T val);										// Inserts a value in the tree.
	void traverse(int order);								// Displays the whole tree it takes 1 for in order traverse, 2 for pre order traverse, and 3 for post order traverse as an input.
	void inOrder(Node<T>* start);
	void preOrder(Node<T>* start);
	void postOrder(Node<T>* start);
	~BSTree(void);
};

