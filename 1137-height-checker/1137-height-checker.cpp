class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> freq(101, 0);

        for(auto h : heights){
            freq[h]++;
        }

        int expected = 0;
        int count = 0;

        for(int h = 1; h <= 100; h++){
            while(freq[h] > 0){
                if(heights[expected] != h){
                    count++;
                }

                expected++;
                freq[h]--;
            }
        }

        return count;
    }
};