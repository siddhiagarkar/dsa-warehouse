#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> pasc;

  for(int i=0; i<n; i++){
    vector<long long int> vec; //long long int
    for(int j=0; j<=i; j++){
      if(j==0 || j==i)
      vec.push_back(1);
      else
      vec.push_back(pasc[i-1][j]+pasc[i-1][j-1]);
    }
    pasc.push_back(vec);
  }

  return pasc;
}

//TC = O(n^2), where n = number of rows(given)

//SC = In this case, we are only using space to store the answer. That is why space complexity can still be considered as O(1).

