#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long curr_sum=arr[0],mx_sum=arr[0];
    for(int i=1;i<n;i++)
    {
        curr_sum+=arr[i];
        if(curr_sum<arr[i])curr_sum=arr[i];
        if(curr_sum<0)curr_sum=0;
        mx_sum=max(mx_sum,curr_sum);
    }return mx_sum;
}
