#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;


int freq[400005]; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t; 
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        for (int i = 0; i <= 2 * m; i++) freq[i] = 0;
        
        for (int i = 0; i < n; i++) {
            int size;
            cin >> size;
            freq[size]++; 
        }
        
        int max_carrots = 0;
        int count = 0; 
        
        for (int x = m; x >= 1; x--) {
            count += freq[x]; 
            int current_pieces = count + freq[2 * x];
            
            if (current_pieces > max_carrots) {
                max_carrots = current_pieces;
            }
        }
        
        cout << max_carrots << "\n";
    }
    
    return 0;
}
