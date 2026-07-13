/*
LeetCode 1752
Problem: Check if Array Is Sorted and Rotated
Difficulty: Easy

Approach:
- Count the number of places where nums[i] > nums[(i+1)%n].
- If the count is more than 1, return false.
- Otherwise, return true.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i=1 ; i<n ; i++){
            if(nums[i-1] > nums[i]){
                count++;
            }
        }
        if(nums[n-1] > nums[0])
        count++;
        return count<=1; 
        
    }
};