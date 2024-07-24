#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        nums.push_back(i);
    }
    int total;
    for(int num : nums)
        total += num;
    cout << "Avg is: " << total / n;
    return 0;
}
