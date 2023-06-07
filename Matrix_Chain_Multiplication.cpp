#include <bits/stdc++.h> 
// MEMOIZATION
int MCM(int i,int j,vector<int>&arr,vector<vector<int>>&dp)
{
    if(i==j)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int mn=INT_MAX;
    for(int k=i;k<j;k++)
    {
        int steps=arr[i-1]*arr[k]*arr[j]+MCM(i,k,arr,dp)+MCM(k+1,j,arr,dp);
        mn=min(mn,steps);
    }return dp[i][j]=mn;
}
int matrixMultiplication(vector<int> &arr, int N)
{
    // Write your code here.
    vector<vector<int>>dp(N,vector<int>(N,-1));
    return MCM(1,N-1,arr,dp);
}
