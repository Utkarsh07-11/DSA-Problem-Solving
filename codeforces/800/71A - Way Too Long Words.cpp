#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string str[100];

    for (int i = 0; i < n; i++) {
        cin >> str[i];

        if (str[i].length() > 10) {
            cout << str[i][0]
                 << str[i].length() - 2
                 << str[i].back();
        }
        else {
            cout << str[i];
        }

        cout << endl;
    }

    return 0;
}