#include<iostream>
using namespace std;

int search(int arr[],int size,int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;

        }
    }
    return 0;
}


int main(){
    int arr[10]={2,5,-6,3,-5,6,8,1,0,4};

    cout<<"enter the element search for "<<endl;
    int key;
    cin>>key;

    int found = search(arr,10,key);
    if(found){
        cout<<"key is present "<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }

    return 0;


}