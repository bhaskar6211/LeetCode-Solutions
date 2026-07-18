//3Sum Closest
//using a sorting and two-pointer approach in C++
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closest = nums[0] + nums[1] + nums[2];
        
        for (int i = 0; i < nums.size() - 2; i++) {
            int left = i + 1;
            int right = nums.size() - 1;
            
            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];
                if (abs(currentSum - target) < abs(closest - target)) {
                    closest = currentSum;
                }
                if (currentSum < target) {
                    left++;
                } else if (currentSum > target) {
                    right--;
                } else {
                    return currentSum;
                }
            }
        }
        return closest;
    }
};
int main() {
    Solution obj;

    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    int result = obj.threeSumClosest(nums, target);

    cout << "Closest Sum: " << result << endl;

    return 0;
}