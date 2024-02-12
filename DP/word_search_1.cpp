class Solution {
public:  
    bool wordBreak(string s, vector<string>& wdict) {
        set<string> dict;
        vector<string> temp;
        string w="";
        for(int i=0;i<wdict.size();i++)
        {
            dict.insert(wdict[i]);
        }
        vector<bool> dp(s.length()+1, false);
        dp[s.length()]=true;
        for(int i=s.length()-1;i>=0;i--)
        {
            for(int j=i;j<s.length();j++)
            {
                string word=s.substr(i, j-i+1);
                if(dict.find(word)!=dict.end() && dp[j+1]==true)
                {
                   dp[i]=true;
                }
            }
        }
     return dp[0];
    }
};
