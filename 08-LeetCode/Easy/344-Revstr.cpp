class Solution {
public:
    void reverseString(vector<char>& name) {
         int s = 0;
    int e = name.size()-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
    }
};