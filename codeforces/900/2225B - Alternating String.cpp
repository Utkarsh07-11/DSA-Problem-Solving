#include <bits/stdc++.h>

using namespace std;

int c[200005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        string s;
        cin >> s;
        int n = s.size();
        
        if (n <= 2) {
            cout << "YES\n";
            continue;
        }
        
        for(int j = 0; j < n; j++){
            int char_val = (s[j] == 'a') ? 0 : 1;
            c[j] = (char_val + j) % 2;
        }
        
        int transitions = 0;
        for(int j = 0; j < n - 1; j++){
            if (c[j] != c[j+1]){
                transitions++;
            }
        }
        
        if (transitions <= 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }   
    
    return 0;
}
