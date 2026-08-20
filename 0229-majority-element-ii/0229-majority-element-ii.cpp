class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> ans;
        for(auto x : nums){
            freq[x]++;
        }

        int n = nums.size()/3;
        for(auto x : freq){
            if(x.second > n){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};