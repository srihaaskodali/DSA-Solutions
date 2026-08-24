class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int max = INT_MIN, element;
        for(int x : nums){
            mpp[x]++;
            if(mpp[x] > max){
                max = mpp[x];
                element = x;
            }
        }
        return element;
    }
};