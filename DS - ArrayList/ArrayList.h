#pragma once

template<class dataType>
class ArrayList
{
    private:
        dataType* arr;
        int size;
        int count;
    
    public:
        ArrayList(int);
        int length();                           // Returns the number of elements in the ArrayList.
        void append(dataType);                  // Adds an element at the end of the ArrayList.
        void display();                         // Displays the elements of the ArrayList.    
        dataType at(int);                       // Returns an element at a specified postion.
        void insertAt(int, dataType);           // Inserts an element at a specific position. 
        void deleteFrom(int);                   // Deletes an element from a specific position.
        void expand();                          // Doubles the size of the ArrayList.
        bool isFull();                          // Returns true if the ArrayList is full
        ~ArrayList();                           // Frees the memory allocated for the ArrayList.
};