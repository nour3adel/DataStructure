#include <iostream>
#include "Queue.cpp"

using namespace std;
int main(){
    Queue<int> Queue(10);
    Queue.Enqueue(5);    
    Queue.Enqueue(6);
    Queue.Enqueue(7);

    cout << "Queue's Content:\n";
    while(!Queue.isEmpty()){
        cout << Queue.Front() << endl;
        Queue.Dequeue();
    }

    return 0;
}