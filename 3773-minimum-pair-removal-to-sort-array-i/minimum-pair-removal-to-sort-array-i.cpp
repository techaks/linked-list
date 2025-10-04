class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int ops = 0;

        // repeat until array becomes non-decreasing
        while (true) {
            bool sorted = true;
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] < nums[i - 1]) {
                    sorted = false;
                    break;
                }
            }
            if (sorted) break;

            // find adjacent pair with minimum sum (leftmost if tie)
            int minSum = INT_MAX;
            int idx = -1;
            for (int i = 0; i + 1 < nums.size(); i++) {
                int sum = nums[i] + nums[i + 1];
                if (sum < minSum) {
                    minSum = sum;
                    idx = i;
                }
            }

            // merge that pair
            vector<int> newNums;
            for (int i = 0; i < nums.size(); i++) {
                if (i == idx) {
                    newNums.push_back(nums[i] + nums[i + 1]);
                    i++; // skip next
                } else {
                    newNums.push_back(nums[i]);
                }
            }

            nums = newNums;
            ops++;
        }

        return ops;
    }
};
