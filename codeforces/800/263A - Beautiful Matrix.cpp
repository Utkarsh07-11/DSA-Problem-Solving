#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int val;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> val;
            if (val == 1) {
                cout << abs(i - 3) + abs(j - 3) << endl;
                return 0; 
            }
        }
    }

    return 0;
}