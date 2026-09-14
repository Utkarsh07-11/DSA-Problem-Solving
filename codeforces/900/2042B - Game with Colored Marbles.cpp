#include <iostream>
#include <algorithm>

using namespace std;

int counts[1005];

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        for (int i = 0; i <= n; i++) {
            counts[i] = 0;
        }
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            counts[x]++; 
        }
        
        int uc = 0;
        int dc = 0;
        
        for (int i = 1; i <= n; i++) {
            if (counts[i] == 1) {
                uc++;
            } else if (counts[i] > 1) {
                dc++;
            }
        }
        
        int ans = dc + ((uc + 1) / 2) * 2;
        
        cout << ans << "\n";
    }
    
    return 0;
}
