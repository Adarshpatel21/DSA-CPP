#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;

    m[0]="adarsh";
       
            //first- second  
    m.insert({1, "Adarsh"});
    m.insert({2, "Patel"});
    m.insert({3, "Hello"});
    m.insert({4, "World"});

    for (auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 3 ->"<<m.count(3)<<endl; 
    //count() function is used to check if a key exists in the map. It returns 1 if the key exists, otherwise it returns 0.

    cout<<"Size of map: "<<m.size()<<endl;
    for(auto i:m){  //auto is used to automatically deduce the type of the variable i, which in this case is a pair<int, string> representing each key-value pair in the map.
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"after erase"<<endl;
    m.erase(2);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"front: "<<m.begin()->first<<" "<<m.begin()->second<<endl;
    cout<<"back: "<<m.rbegin()->first<<" "<<m.rbegin()->second<<endl;

    auto it=m.find(3); //find() function is used to search for a specific key in the map. It returns an iterator pointing to the element with the specified key if found, or m.end() if the key is not found.

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}