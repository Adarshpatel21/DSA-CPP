#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    
    while(start <= end){
        if(arr[mid] == key){
            return mid;

        }
        if(key > arr[mid]){
            start =  mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return -1;

}


int main(){

int evenarr[6] = {2,3,5,6,8,9};
int oddarr[5]= {4,6,7,8,9};

int index = binarysearch(evenarr,6,9);
cout<< " position of 9 is at index  " << index << endl;

int index1 = binarysearch(oddarr,5,6);
cout<< " position of 6 is at index  " << index1 << endl;





}