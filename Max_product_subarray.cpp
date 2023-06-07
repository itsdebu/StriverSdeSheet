#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
//   DYNAMIC APPROACH TC=O(n*n)
//   #include <bits/stdc++.h> 
// int max_product(int index,vector<int>arr,int n,int temp,map<int,map<int,long int>>&dp)
// {
// 	int mx=INT_MIN;
// 	if(index==n-1)return max(mx,temp*arr[index]);
// 	if(dp[temp][index]!=0)return dp[index][temp];
// 	int not_take=max_product(index+1,arr,n,1,dp);
// 	int take=max_product(index+1,arr,n,temp*arr[index],dp);
// 	mx=max({mx,take,temp*arr[index],not_take});
// 	return dp[temp][index]=mx;
// }
// int maximumProduct(vector<int> &arr, int n)
// {
// 	map<int,map<int,long int>>dp;
// 	return max_product(0,arr,n,1,dp);
// }

	// Write your code here
	int curr_sum=arr[0],mx_sum=arr[0];
	if(curr_sum==0)curr_sum=1;
	for(int i=1;i<n;i++)
	{
		curr_sum*=arr[i];
		mx_sum=max(mx_sum,curr_sum);
		if(curr_sum==0)curr_sum=1;
	}
	int ans=0;
	ans=mx_sum;
	mx_sum=arr[n-1],curr_sum=arr[n-1];
	if(curr_sum==0)curr_sum=1;
	for(int i=n-2;i>=0;i--)
	{
		curr_sum*=arr[i];
		mx_sum=max(mx_sum,curr_sum);
		if(curr_sum==0)curr_sum=1;
	}
  //   if(max(ans,mx_sum)<0)return 0;  FOR LEETCODE
	return max(ans,mx_sum);

}
