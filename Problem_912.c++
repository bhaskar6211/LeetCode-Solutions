//Sort an Array

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        function<void(int,int)> mergeSort = [&](int l, int r) {
        if (l >= r) return;
            int m = l + (r - l) / 2;
            mergeSort(l, m);
            mergeSort(m + 1, r);
            vector<int> temp;
            int i = l, j = m + 1;

            while (i <= m && j <= r) {
                if (nums[i] <= nums[j])
                    temp.push_back(nums[i++]);
                else
                    temp.push_back(nums[j++]);
            }
            while (i <= m) temp.push_back(nums[i++]);
            while (j <= r) temp.push_back(nums[j++]);
            for (int k = 0; k < temp.size(); k++)
                nums[l + k] = temp[k];
        };
        mergeSort(0, nums.size() - 1);
        return nums;
    }
};