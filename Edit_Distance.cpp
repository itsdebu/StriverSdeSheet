#include <bits/stdc++.h>
// MEMOIZATION
int solve(int i,int j,string &s1,string &s2,vector<vector<int>>&dp)
{
    if(i<0)return j+1;
    if(j<0)return i+1;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s1[i]==s2[j])
    {
        return dp[i][j]= solve(i-1,j-1,s1,s2,dp);
    }
    else{
        return dp[i][j]= min({1+solve(i,j-1,s1,s2,dp),1+solve(i-1,j-1,s1,s2,dp),1+solve(i-1,j,s1,s2,dp)});
    }
}

int editDistance(string str1, string str2)
{
    //write you code here
    vector<vector<int>>dp(str1.size()+1,vector<int>(str2.size()+1,-1));
    return solve(str1.size(),str2.size(),str1,str2,dp);
}
