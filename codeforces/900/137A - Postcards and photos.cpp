#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int count = 0; 
    string str;
    
    int countc = 0; 
    int countp = 0;
    
    cin >> str;
    
    if (str[0] == 'C') countc = 1;
    if (str[0] == 'P') countp = 1;

    for(int i = 1; i < str.length(); i++){
        
        if(str[i] == str[i-1] && str[i] == 'C'){
            countc++;
            if(countc == 5){
                count++;
                countc = 0;
            }
        }
        else if(str[i] == str[i-1] && str[i] == 'P'){
            countp++;
            if(countp == 5){
                count++;
                countp = 0;
            }
        }
        else if(str[i] != str[i-1]){
            if(countc > 0 || countp > 0){
                count++;
            }
            
            if(str[i] == 'C'){
                countc = 1;
                countp = 0;
            }
            if(str[i] == 'P'){
                countp = 1;
                countc = 0;
            }
        }
    }

    if(countc > 0 || countp > 0){
        count++;
    }

    cout << count << endl;
    return 0;
}
