#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<"Size of vector: "<<v.size()<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"finding 3 ->"<<binary_search(v.begin(), v.end(), 3)<<endl; 

    //binary_search() function is used to check if a specific element exists in the sorted range. It returns true if the element is found,
    //  otherwise it returns false.

    cout<<"lower bound ->"<<lower_bound(v.begin(), v.end(), 3)-v.begin()<<endl; 

    //lower_bound() function is used to find the first position where a specific element can be inserted in the sorted range without violating the order.
    //  It returns an iterator pointing to the first element that is not less than the specified value.

    cout<<"upper bound ->"<<upper_bound(v.begin(), v.end(), 3)-v.begin()<<endl; 

    //upper_bound() function is used to find the first position where a specific element can be inserted in the sorted range without violating the order.
    //  It returns an iterator pointing to the first element that is greater than the specified value.

    vector<int> c = {90, 20, 60, 40};

    auto it = lower_bound(c.begin(), c.end(), 30);

    cout << *it << endl; //*it is used to access the value
    cout << "Index of lower bound: " << it - c.begin() << endl; 

    int a = 5;
    int b = 10;

    cout << "Max: " << max(a, b) << endl; //max() function is used to find the maximum of two values.
    cout << "Min: " << min(a, b) << endl; //min()

    swap(a, b); 
    cout << "After swapping: a = " << a << ", b = " << b << endl; //swap() function is used to swap the values of two variables.

    string str = "Hello";
    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl; //reverse() function is
    //used to reverse the order of elements in a range.

    rotate(c.begin(), c.begin() + 1, c.end());
    cout << "After rotation: ";
    for (int i : c) {
        cout << i << " ";
    }
    cout << endl;

    sort(c.begin(), c.end());
    cout << "After sorting: ";
    for (int i : c) {
        cout << i << " ";
    }
    cout << endl;

    

}