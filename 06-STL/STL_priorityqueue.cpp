#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    //This works because priority_queue uses less<int> by default, which keeps the largest element at the top.
    priority_queue<int> maxi;

    //min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    //No, you cannot write priority_queue<int, vector<int>, less<int>> mini; because less<int> is the default comparator for priority_queue, and it creates a max heap.
    // To create a min heap, you need to specify a custom comparator (in this case, greater<int>) to change the ordering of elements.

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<"Size of max heap: "<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    cout<<"Size of min heap: "<<mini.size()<<endl;
    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"Empty or not: "<<mini.empty()<<endl;
 }