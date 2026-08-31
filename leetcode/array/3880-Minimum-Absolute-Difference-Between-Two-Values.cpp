class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        
    
        int a = -1;       
        int b = -1;       
        int ans = INT_MAX; 

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                a = i;
                if (b != -1) ans = min(ans, a - b);
            } 
            else if (nums[i] == 2) {
                b = i;
                if (a != -1) ans = min(ans, b - a);
            }
        }

        return (ans == INT_MAX) ? -1 : ans;
    }

};