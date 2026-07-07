#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int start = 0;
    int end = v.size()-1;

    while(start < end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> v;

    v.push_back(11);
    v.push_back(22);
    v.push_back(33);
    v.push_back(44);
    v.push_back(55);

    vector<int> ans = reverse(v);

    cout<<"printing reverse array"<<endl;
    print(ans); //for printing vector we have to use print function because we cannot use cout<<v[i] directly for vector.

    return 0;
}