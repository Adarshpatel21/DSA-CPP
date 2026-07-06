#include<iostream>
using namespace std;

int evenodd(int n);

int main(){
    int n;
    cin>>n;
    evenodd(n);
    return 0;

}

int evenodd(int n){
    if(n%2==0){
        cout<<"no. is even number"<<endl;
        return 0;

    }
    else{
        cout<<"no. is odd number"<<endl;
    }
    return 0;

}