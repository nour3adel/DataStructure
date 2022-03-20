#include <iostream>
#include "ArrayList.cpp"

using namespace std;

int main(){

    ArrayList<int> list(5);

    list.append(1);
    list.append(6);
    list.append(3);
    list.append(4);
    list.append(5);
    
    list.deleteFrom(1);
    list.insertAt(1, 2);
    
    list.display();

    return 0;
}