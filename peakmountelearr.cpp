#include<iostream>
using namespace std;

int peakelement(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;
    while(s < e){
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;

}

int main(){
    int arr[100], size;
    cout<< "Enter the size of array: ";
    cin>>size;
    cout<<"enter the elements of array "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    int peak = peakelement(arr, size);
    cout<<"The peak element is: "<<peak<<endl;

}