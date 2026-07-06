#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        int start = n-i+1;
       
        while(j<=start){
            cout<<"*";
            j++;

        }
        cout<<endl;
        i++;
    }
}