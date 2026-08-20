class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        int mini = INT_MAX;
        int maxi = INT_MIN;

        unordered_set<int> ans;
        for(auto num : nums){
            mini = min(num ,mini);
            maxi = max(num,maxi);
            ans.insert(num);
        }

        for(int i = mini; i < maxi+1; i++){
            if(ans.find(i) == ans.end()) res.push_back(i);
        }
        return res;
    }
};