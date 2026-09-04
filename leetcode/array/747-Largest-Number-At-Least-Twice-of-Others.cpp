class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int m = INT_MIN;
        int index = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] > m){
                m = nums[i];
                index = i;
            }
        }

        
        for(int i = 0; i < n; i++){
            if(i != index && m < 2 * nums[i]){
                return -1;
            }
        }
        return index;

    }
};