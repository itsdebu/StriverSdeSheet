// MEMOIZATION
#include <bits/stdc++.h>

int max_earn(int index,int w,vector<int>&val,vector<int>&weights,int n,vector<vector<int>>&dp)
{
	if(index==n-1)
	{
		if(w>=weights[index])return val[index];
		return 0;
	}
	if(dp[index][w]!=-1)return dp[index][w];
	int not_take=max_earn(index+1,w,val,weights,n,dp);
	int take=0;
	if(weights[index]<=w)
	{
		take=val[index]+ max_earn(index+1,w-weights[index],val,weights,n,dp);
	}
	return dp[index][w]=max(take,not_take);
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
	vector<vector<int>>dp(n,vector<int>(w+1,-1));
	return max_earn(0,w,values,weights,n,dp);
}
