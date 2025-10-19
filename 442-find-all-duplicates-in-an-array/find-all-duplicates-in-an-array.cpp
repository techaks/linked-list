class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        unordered_set<int>st;
        int n = nums.size();
        vector<int> res;

        for(int i = 0 ; i< n ; i++){
            mp[nums[i]]++;
        }
        for(int i = 0 ; i< n ; i++){
            if(st.find(nums[i]) != st.end()){
                continue;
            }
            if(mp[nums[i]] == 2){
                res.push_back(nums[i]);
            }
            st.insert(nums[i]);
        }

        return res;

    }
};