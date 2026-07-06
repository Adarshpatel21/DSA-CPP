#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(0);
    s.insert(0);

    cout<<"Size of set: "<<s.size()<<endl;
    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    s.erase(s.begin());
    cout<<"after erase"<<endl;
    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"front: "<<*s.begin()<<endl;
    cout<<"back: "<<*s.rbegin()<<endl;

    cout<<"empty or not: "<<s.empty()<<endl;
}