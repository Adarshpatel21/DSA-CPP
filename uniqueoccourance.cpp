#include<iostream>
using namespace std;
int duplicate(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans^arr[i];
    }
    for(int i = 1; i < size; i++){
        ans = ans^i;
    }
    return ans;
}
int printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int main(){
    int size;
    cout<<"enter the size of array "<<endl;
    cin>>size;
    int arr[100];
    cout<<"enter the elements of array "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    int duplicateElement = duplicate(arr, size);
    cout<<"The duplicate element is: "<<duplicateElement<<endl;
    printArray(arr, size);
    return 0;
}