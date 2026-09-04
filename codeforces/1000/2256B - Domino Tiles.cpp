#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MOD = 998244353;

long long countWays(const string& s) {
    long long c0 = 1, c1 = 1; 

    for (char ch : s) {
        long long next0 = 0, next1 = 0;
        
        if (ch == '0' || ch == '?') next0 = c1; 
        if (ch == '1' || ch == '?') next1 = c0; 
        
        c0 = next0 % MOD;
        c1 = next1 % MOD;
    }
    return (c0 + c1) % MOD;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string odd = "", even = "";
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) odd += s[i];
        else even += s[i];
    }

    long long ans = (countWays(odd) * countWays(even)) % MOD;
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
