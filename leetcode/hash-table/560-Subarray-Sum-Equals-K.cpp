class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;

        m[0] = 1;

        int s = 0;
        int c = 0;

        for(int i = 0; i < nums.size(); i++){
            s += nums[i];
            int diff = s - k;
            if(m.find(diff) != m.end()){
                c += m[diff];
            }
            m[s]++;
        }
        return c;

    }
};