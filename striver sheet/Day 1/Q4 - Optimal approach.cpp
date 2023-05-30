#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long curr_sum = 0;
    long long max_sum = INT_MIN;
    long long ans=0;

    for(int i=0; i<n; i++){
        curr_sum = curr_sum+arr[i];
        if(curr_sum<0)
        curr_sum=0;
        ans = max(curr_sum, ans);
    }

    return ans;
}


