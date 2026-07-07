#include<iostream>
using namespace std;

void bubblesort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        bool swapped = false;
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main(){
   int arr[100], size;
    cout<< "Enter the size of array: ";
    cin>>size;
    cout<<"enter the elements of array "<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    bubblesort(arr, size);
    cout << "Sorted array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}