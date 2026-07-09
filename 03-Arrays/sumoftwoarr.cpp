#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Sumofarrays(int arr1[], int arr2[], int n1, int n2)
{
    int i = n1 - 1;
    int j = n2 - 1;
    int carry = 0;

    vector<int> ans;

    while (i >= 0 && j >= 0)
    {
        int sum = arr1[i] + arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while (i >= 0)
    {
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    while (j >= 0)
    {
        int sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    while (carry != 0)
    {
        ans.push_back(carry % 10);
        carry /= 10;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    int n1, n2;

    cout << "Enter size of first array: "<<endl;
    cin >> n1;

    cout << "Enter size of second array: "<<endl;
    cin >> n2;

    int arr1[n1], arr2[n2];

    cout << "Enter elements of first array: "<<endl;
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "Enter elements of second array: "<<endl;
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    vector<int> result = Sumofarrays(arr1, arr2, n1, n2);

    cout << "Sum of two arrays is: ";
    for (int digit : result)
        cout << digit<<" ";

    cout << endl;

    return 0;
}