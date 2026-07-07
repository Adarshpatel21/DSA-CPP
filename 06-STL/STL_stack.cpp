#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s; //string type ka stack
    s.push("Adarsh");
    s.push("Patel");
    s.push("Hello");
    cout<<"Top element: "<<s.top()<<endl;
    s.pop(); //start removing the top element

    cout<<"Top element after pop: "<<s.top()<<endl;

    cout<<"Size of stack: "<<s.size()<<endl;

    cout<<"Empty or not: "<<s.empty()<<endl;

    
    
}