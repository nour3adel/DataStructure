#include "BSTree.h"
#include <iostream>
#include <assert.h>

using namespace std;

template <class T>
BSTree<T>::BSTree(void)
{
	root=NULL;
}

template <class T>
bool BSTree<T>::contains(T val)
{
	Node<T>* temp=findNode(val);

	return (temp!=NULL);
}

template <class T>
Node<T>* BSTree<T>::findNode(T val)
{
	Node<T>* temp = root;

	while((temp != NULL) && (temp->value != val))
		if(temp->value > val)
			temp = temp->left;
		else
			temp = temp->right;
	return temp;
}

template <class T>
void BSTree<T>::insert(T val)
{
	assert(!contains(val));
	Node<T>* temp=root;
	Node<T>* newNode=new Node<T>(val);
	if(root==NULL)
		root = newNode;
	else
	{
		while(true)
		{
			if(temp->value > val)
				if(temp->left == NULL)
				{
					temp->left = newNode;
					break;
				}
				else
					temp = temp->left;
			else
				if(temp->right == NULL)
				{
					temp->right = newNode;
					break;
				}
				else
					temp = temp->right;
		}
	}
}


template <class T>
void BSTree<T>::traverse(int order)
{
	if (order==1)
		inOrder(root);
	else if (order==2)
		preOrder(root);
	else
		postOrder(root);
}

template <class T>
void BSTree<T>::inOrder(Node<T>* start)
{
	if (start != NULL)
     {
		inOrder(start->left);
		cout << start->value << endl;
		inOrder(start->right); 
     }
}

template <class T>
void BSTree<T>::preOrder(Node<T>* start)
{
	if (start != NULL)
     {
		 cout << start->value << endl;
		 preOrder(start->left);
		 preOrder(start->right);
	 }
}

template <class T>
void BSTree<T>::postOrder(Node<T>* start)
{
	if (start != NULL)
     {
		 postOrder(start->left);
		 postOrder(start->right);
		 cout << start->value << endl;
     }
}

template <class T>
BSTree<T>::~BSTree(void)
{
}
