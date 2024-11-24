#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarraySum(vector<int> &arr) {
        int max_n = 0;
        int max_so_far = INT_MIN;

        for (int num : arr) {
            max_n = max(num, max_n + num);
            max_so_far = max(max_so_far, max_n);
        }
        return max_so_far;
    }
};

int main() {
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};

    Solution sol;
    int result = sol.maxSubarraySum(arr);

    cout << "The maximum subarray sum is: " << result << endl;

    return 0;
}
