#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    vector<int> a(5, 1); // 5 elements with value 1
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> last(a); // copy of a
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;
    
    v.push_back(1);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;

    cout<<"Element at 2nd index: "<<v.at(2)<<endl;

    cout<<"front: "<<v.front()<<endl;
    cout<<"back: "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size: "<<v.size()<<endl;


}
