#include<iostream>
using namespace std;

void insertionsort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int temp = arr[i];
        int j = i - 1;
        for(; j >= 0; j--){
            if(arr[j] > temp){ 
                // Shift
                arr[j+1] = arr[j];
            }
            else{ //ruk jao
                break;
            }
        } 
       arr[j+1] = temp;
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
    insertionsort(arr, size);
    cout << "Sorted array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}