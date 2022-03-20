#include <iostream>
#include "LinkedList.cpp"
#include "Node.cpp"

using namespace std;

int main(){

    LinkedList<int> list;
    
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(5);

    list.insertAt(0, 0);
    list.insertAt(4, 4);

    list.deleteFrom(0);

    list.append(6);

    for (int i = 0; i < list.length(); i++)
        cout << list.at(i) << endl;

    return 0;
}