class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if (nums.empty()) return ans;

        int start = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (i == nums.size() - 1 || nums[i] + 1 != nums[i + 1]) {
                if (start == nums[i])
                    ans.push_back(to_string(start));          // single number
                else
                    ans.push_back(to_string(start) + "->" + to_string(nums[i])); // range
                if (i != nums.size() - 1)
                    start = nums[i + 1]; // nayi range ka start
            }
        }
        return ans;
    }
};
