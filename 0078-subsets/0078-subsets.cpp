class Solution {
public:
    void subseq(int idx, vector<int> &nums, vector<int> &res,vector<vector<int>> &ans){
        
        if(idx == nums.size()){
            ans.push_back(res);
            return;
        }

        res.push_back(nums[idx]);
        subseq(idx+1 , nums, res, ans);

        res.pop_back();
        subseq(idx+1 , nums, res,ans);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> res;

        vector<vector<int>> ans;
        subseq(0, nums, res, ans);

        return ans;        

    }
};