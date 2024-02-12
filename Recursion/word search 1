class Solution {
public:
    bool findword(string s, set<string> dict, int st, vector<string> temp)
    {   
        if(st>=s.length())
        {
           return true;
        }        
        //word="";
        for(int i=st;i<s.length();i++)
        {
          string word=s.substr(st, i-st+1);
          if(dict.find(word)!=dict.end())
          {
              bool res=findword(s, dict, i+1, temp);
              if(res)
              {
                  return true;
              }
          }
        }
        return false;
    }
    bool wordBreak(string s, vector<string>& wdict) {
        set<string> dict;
        vector<string> temp;
        string w="";
        for(int i=0;i<wdict.size();i++)
        {
            dict.insert(wdict[i]);
        }
        bool res=findword(s, dict, 0, temp);
        return res;
    }
};
