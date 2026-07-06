#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;

    //IN QUEUE, we can only insert elements at the back and remove elements from the front. It follows FIFO (First In First Out) principle.

    q.push("Adarsh");
    q.push("Patel");
    cout<<"Size of queue before pop: "<<q.size()<<endl;
    cout<<"Front element: "<<q.front()<<endl;
    cout<<"Back element: "<<q.back()<<endl;
    q.pop();
    cout<<"Front element after pop: "<<q.front()<<endl;

    cout<<"Size of queue after pop: "<<q.size()<<endl;
}