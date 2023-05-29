#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size();
	int m = matrix[0].size();

	int row_arr[m]={0};
	int col_arr[n]={0};
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(matrix[i][j]==0){
				row_arr[j]=1;
				col_arr[i]=1;
			}
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(row_arr[j]==1 || col_arr[i]==1)
			matrix[i][j]=0;
		}
	}
}

// TC = O(2*n*m)
// SC = O(n) + O(m)
