#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; 
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        priority_queue<long long> pq;
        long long sum = 0, ans = -2e18;

        for (int i = 0; i < n; i++) {
            if (pq.size() == m - 1) {
                ans = max(ans, m * a[i] - sum);
            }
            pq.push(a[i]);
            sum += a[i];
            if (pq.size() > m - 1) {
                sum -= pq.top();
                pq.pop();
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
