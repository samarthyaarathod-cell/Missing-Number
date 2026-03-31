#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int num : nums) {
        actualSum += num;
    }

    return expectedSum - actualSum;
}

int main() {
    int n;
    cout << "Enter number of elements (n): ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements (range 0 to n): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = missingNumber(nums);
    cout << "Missing number: " << result << endl;

    return 0;
}