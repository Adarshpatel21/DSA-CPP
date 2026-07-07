#include<vector>
#include<iostream>
using namespace std;

int firstOcc(vector<int>& arr, int n, int key) {
    int s = 0, e = n-1;
    int ans = -1;
    while(s<=e) {
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) s = mid + 1;
        else e = mid - 1;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {
    int s = 0, e = n-1;
    int ans = -1;
    while(s<=e) {
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) s = mid + 1;
        else e = mid - 1;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    return {firstOcc(arr, n, k), lastOcc(arr, n, k)};
}

int main() {
    // Example usage
    vector<int> arr = {1,2,3,4,5,6,6,7};
    pair<int, int> result = firstAndLastPosition(arr, arr.size(), 6);
    cout << "First: " << result.first << ", Last: " << result.second << endl;

    // If you want to calculate total occurrences
    
    int totalOccurrences = result.second - result.first + 1;
    cout << "Total occurrences: " << totalOccurrences << endl;
    return 0;
}

/* code of love babbar 
#include<vector>
using namespace std;
int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    
    return p;
}
*/