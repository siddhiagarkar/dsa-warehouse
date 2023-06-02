#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{

   int idx_0=0;
   int idx_1=0;
   int idx_2=0;
   
   //   Write your code here
   for (int i = 0; i < n; i++) {
     if (arr[i] == 0)
       idx_0++;
     else if (arr[i] == 1)
       idx_1++;
     else if (arr[i] == 2)
       idx_2++;
   }
   // cout<<idx_0<<" "<<idx_1<<" "<<idx_2<<endl;
   
      for(int i=0; i<idx_0; i++)
   arr[i]=0;
   
      for(int i=idx_0; i<idx_0+idx_1; i++)
   arr[i]=1;
   
      for(int i=idx_0+idx_1; i<idx_0+idx_1+idx_2; i++)
   arr[i]=2;
   
}

// TC=O(n)+O(n)
// SC=O(1)
