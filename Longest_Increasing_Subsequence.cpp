#include <bits/stdc++.h>
int longestIncreasingSubsequence(int arr[], int n)
{
    // Write Your Code here
  //tabulation iterating and checking for each element how many numbers are smaller than than element in it left array 
   vector<int> dp(n+1,0),temp(n+1);//we did co-ordinatae change

    //-1,0,1,2,...,n-1 => 0,1,2,...,n hence n+1 size

   //base case

   for(int i=0;i<=n;i++)dp[i]=0;

   for(int i=n-1;i>=0;i--){

      for(int max_i=-1;max_i<n;max_i++){      

         int take=INT_MIN;int not_t;
         if (max_i == -1 || arr[max_i] < arr[i]) {

           take=dp[i+1] + 1;

         } 
         not_t=dp[max_i+1];
         temp[max_i+1]=max(take,not_t);
      }
      dp=temp;
   }
   int result=dp[0];
   if(result) return result;
   else return 1;

}
