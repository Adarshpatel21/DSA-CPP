#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl; 

    d.pop_back();
    cout<<"after pop back"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"front: "<<d.front()<<endl;
    cout<<"back: "<<d.back()<<endl;

    cout<<"empty or not: "<<d.empty()<<endl;

    cout<<"before erase"<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"after erase"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
}