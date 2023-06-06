#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   // 1st approach using sorting O(nlogn)
   // sort(arr,arr+n);

   // 2nd approach counting number of 0,1 and 2 O(n)
   // int zero=0,one=0,two=0;
   // for(int i=0;i<n;i++)
   // {
   //    if(arr[i]==0)zero++;
   //    else if(arr[i]==1)one++;
   //    else two++;
   // }
   // int index=0;
   // while(zero--)
   // {
   //    arr[index]=0;
   //    index++;
   // }
   // while(one--)
   // {
   //    arr[index]=1;
   //    index++;
   // }
   // while(two--)
   // {
   //    arr[index]=2;
   //    index++;
   // }

   // 3rd aproach Dutch National Algorithm O(logn)
   // int i=0,j=n-1;
   // int start=0;
   // while(start<=j)
   // {
   //    if(arr[start]==0)
   //    {
   //       swap(arr[i],arr[start]);
   //       i++;
   //       start++;
   //    }
   //    else if(arr[start]==2)
   //    {
   //       swap(arr[start],arr[j]);
   //       j--;
   //    }
   //    else
   //    {
   //       start++;
   //    }
   // }


}
