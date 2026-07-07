#include<iostream>
#include<array>

using namespace std;
int main(){

    int basic[3] = {1,2,3};

    array<int, 4> a = {1,2,3,4};

    int size = a.size();

    for(int i = 0; i < size; i++){
        cout<<a[i]<<endl;
    }
    
    cout<<"Element at 2nd index: "<<a.at(2)<<endl;

    cout<<"Empty or not: "<<a.empty()<<endl;

    cout<<"First element: "<<a.front()<<endl;

    cout<<"Last element: "<<a.back()<<endl;

    cout<<"Size of array: "<<a.size()<<endl;

    cout<<"Max size of array: "<<a.max_size()<<endl;

    cout<<"Before fill: "<<endl;

    cout<<a[0]<<endl; 


}