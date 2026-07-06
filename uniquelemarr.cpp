#include<iostream>
using namespace std;
int unique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans^arr[i];
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
    int uniqueElement = unique(arr, size);
    cout<<"The unique element is: "<<uniqueElement<<endl;
    printArray(arr, size);
    return 0;
}