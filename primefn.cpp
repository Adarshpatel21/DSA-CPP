#include<iostream>
using namespace std;
int isprime(int n);

int main(){
    int n;
    cin>>n;
    isprime(n);
    return 0;

}

int isprime(int n){

    for(int i = 2 ; i < n ; i++){
        if(n%i == 0){
            cout<< "not prime"<<endl;
            return 0;

        }
        
    }
    cout<<"prime"<<endl;
    return 0;
    
}