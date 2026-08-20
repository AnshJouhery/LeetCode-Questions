class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> freq(1001, 0);

        for(int x : arr1){
            freq[x]++;
        }

        vector<int> res;

        for(int x : arr2){
            while(freq[x] > 0){
                res.push_back(x);
                freq[x]--;
            }
        }

        for(int x = 0; x < 1001; x++){
            while(freq[x] > 0){
                res.push_back(x);
                freq[x]--;
            }
        }
        return res;
    }
};