class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        for (int s=0;s<=n-m;s++){
            
            int j=0;
            while(j<m && haystack[s+j]==needle[j]){
                j+=1;
            }
            if (j==m)
                return s;
        }
        return -1;
    }
};