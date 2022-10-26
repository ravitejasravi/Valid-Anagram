class Solution {
public:
    bool isAnagram(string s, string t) {
        
        bool found;
        unordered_map<char, int> SMap;
        unordered_map<char, int> TMap;
        
        if(s.length() != t.length())
            return false;
        
        for(int i = 0; i < s.length(); i++)
        {
            SMap[s[i]] += 1;
            TMap[t[i]] += 1;
        }
        
        for(int i = 0; i < s.length(); i++)
        {
            if(SMap[s[i]] != TMap[s[i]])
                return false;
        }
        
        return true;
    }
};