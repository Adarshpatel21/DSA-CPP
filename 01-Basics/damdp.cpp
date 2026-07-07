#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i <= n){


        //print 1 st tringle
         int j = 1;
        int start = n-i+1;
       
        while(j<=start){
            cout<<j<<" ";
            j++;

        }
        // print half start
        int st1 = i - 1;
        while(st1){
            cout<<"*"<<" ";
            st1--;
        }
        //print 2nd half star
        int st2 = i -1;
        while(st2){
            cout<<"*"<<" ";
            st2--;
        }
        int count=n-i+1;
        while(count){
            cout<<count<<" ";
            count--;
        }


        //print 2nd 
        cout<<endl;
        i++;

        

    }
    
}