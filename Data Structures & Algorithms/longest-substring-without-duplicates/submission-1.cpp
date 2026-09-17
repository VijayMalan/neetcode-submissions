class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        int ans = 0;
        unordered_set<int>hash;
        for(int r = 0;r<n;r++){
            char c = s[r];
            while(hash.count(c)!=0){
                hash.erase(s[l++]);
            }
            hash.insert(c);
            ans = max(ans , r-l+1);
        }
    return ans;}
};
