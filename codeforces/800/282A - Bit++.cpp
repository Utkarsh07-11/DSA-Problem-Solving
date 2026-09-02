#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    int count = 0;
    
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        if(str == "X++" || str == "++X"){
            count++;
        } else if(str == "X--" || str == "--X"){
            count--;
        }
    }
    cout<<count<<endl;
    
    return 0;
}