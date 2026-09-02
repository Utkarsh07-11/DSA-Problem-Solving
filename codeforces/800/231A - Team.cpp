#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    int check = 0;
    int arr[n][3];
    for(int i = 0; i<n; i++){
        int count = 0;
        for(int j = 0; j<3; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1) count += 1;
            

        }
        if(count >= 2){
                check ++; 
            }

    }
    cout<<check<<endl;

    

    
    return 0;
}