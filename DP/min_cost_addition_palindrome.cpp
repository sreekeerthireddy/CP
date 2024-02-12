#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len, n;
    cin>>len;
    cin>>n;
    string s;
    unordered_map<char, int> umap;
    for(int i=0;i<n;i++)
    {
        char ch='a'+i;
        int val;
        cin>>val;
        umap[ch]=val;
    }
    cin>>s;
    int dp[s.length()][s.length()];
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            dp[i][j]=0;
        }
    }
    for(int siz=2;siz<=len;siz++)
    {
        for(int i=0;i<len-siz+1;i++)
        {
            int j=i+siz-1;
            if(s[i]==s[j])
            {
                dp[i][j]=dp[i+1][j-1];
            }
            else
            {
                dp[i][j]=min(dp[i][j-1]+umap[s[j]], dp[i+1][j]+umap[s[i]]);
            }
        }
    }
    cout<<dp[0][len-1];
    return 0;
}
