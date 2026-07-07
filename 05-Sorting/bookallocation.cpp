#include<iostream>
#include<vector>
using namespace std;
bool isvalid(vector<int>& arr, int n, int m, int maximumallowedPages){
    int student = 1, pages = 0;
    for (int i=0; i<n; i++){
        if(arr[i] > maximumallowedPages){
            return false;
        }
        if(pages + arr[i] > maximumallowedPages){
            student++;
            pages = arr[i];
        }
        else{
            pages += arr[i];
        }
    }
    return student > m ? false : true;
}

int allocateBooks(vector<int>& arr, int n, int m) {
    if(m>n){ //edge case
        return -1;
    }
    //All pages sum
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum = sum + arr[i];
    }

    int ans = -1;
    int st = 0,end = sum;  //range of possible ans or search space
    
    while(st<=end) {
        int mid = st + (end-st)/2;

        if(isvalid(arr, n, m, mid)) { //left wala part
            ans = mid;
            end = mid - 1;
        }
        else{  //right wala part
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter the number of books and students: " << endl;
    cin >> n >> m;

    vector<int> arr(n);
    cout << "Enter the number of pages in each book: " << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Minimum number of pages allocated to a student is: " << allocateBooks(arr, n, m) << endl;

    return 0;
}