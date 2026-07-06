// this was the leet code problem of next permutation it does not run here we have to modify the code to run it here
class Solution {
public:
    void nextPermutation(vector<int>& A) { //TC : O(n) & SC : O(1)
        
        //find the pivot
        int pivot = -1 , n = A.size();

        for(int i=n-2 ; i>=0; i--){
            if(A[i] < A[i+1]){
                pivot = i;
                break;
            }

        }
        if(pivot == -1){
            reverse(A.begin(), A.end());
            return;
        }
        // 2nd step next larger element
        for(int i=n-1; i>pivot;i--){
            if(A[i] > A[pivot]){
                swap(A[i],A[pivot]);
                break;
            }
        }
        //3rd step : reverse the array
        // reverse(A.begin() + pivot + 1, A.end());

        int i = pivot +1 , j=n-1;
        while(i<=j){
            swap(A[i],A[j]);
            i++;
            j--;
        }

    }
};