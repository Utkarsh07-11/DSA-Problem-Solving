class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        bool status[101] = {false};
        vector<int> ans;

        for (int b : bulbs) {
            status[b] = !status[b];
        }

        for (int i = 1; i <= 100; i++) {
            if (status[i]) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};