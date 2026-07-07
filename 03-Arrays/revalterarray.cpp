#include<iostream>
using namespace std;
int SwapAlternate(int arr[], int size){
    for(int i = 0; i < size-1; i+=2){
        swap(arr[i],arr[i+1]);
    }
    return 0;
}


printArray(int arr[], int size){
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
    cout<<"original array "<<endl;
    printArray(arr,size);
    SwapAlternate(arr,size);
    cout<<"array after swapping alternate elements "<<endl;
    printArray(arr,size);

}