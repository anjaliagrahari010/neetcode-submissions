class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[256]={0};
        int l1=s.size();
        int l2=t.size();
        if(l1!=l2){
            return false;
        }
        for(int i=0;i<l1;i++){
            freq[s[i]]++;
            freq[t[i]]--;
        }
        for(int i=0;i<256;i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
    }
};