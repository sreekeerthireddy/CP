class Solution {
public:
    
    void findwords(int st, string s, set<string> dict, vector<string>& temp, vector<vector<string>>& res)
    {
        if(st>=s.length())
        {
            string r="";
            for(int i=0;i<temp.size();i++)
            {
                r=r+temp[i];
            }
            if(r.length()==s.length())
            {
                res.push_back(temp);
            }
            //temp.clear();
            return;
        }
        string w="";

        for(int i=st; i<s.length();i++)
        {
            w=s.substr(st, i-st+1);
            cout<<w<<"*"<<"\n";
            if(dict.find(w)!=dict.end())
            {
                temp.push_back(w);
                findwords(i+1, s, dict, temp, res);
                //cout<<"temp.top is - "<<temp[temp.size()-1]<<"\n";
                temp.pop_back();
            }
        }
    }    
    vector<string> wordBreak(string s, vector<string>& wdict) {
        set<string> words;
        for(int i=0;i<wdict.size();i++)
        {
           words.insert(wdict[i]);
        }
        vector<string> temp;
        vector<vector<string>> res;

        findwords(0, s, words, temp, res);
        for(int i=0;i<res.size();i++)
        {
            string ans="";
            for(int j=0;j<res[i].size();j++)
            {
                ans+=res[i][j]+" ";
            }
            ans.pop_back();
            temp.push_back(ans);
        }
        return temp;
    }
};
