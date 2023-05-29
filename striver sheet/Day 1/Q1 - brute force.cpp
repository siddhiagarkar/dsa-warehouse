#include <bits/stdc++.h>
void changeRow(vector<vector<int>> &matrix, int i){
	for(int j=0; j<matrix[0].size(); j++)
	{
		if(matrix[i][j]!=0)
		matrix[i][j]=-1;
	}
}
void changeCol(vector<vector<int>> &matrix, int j){
	for(int i=0; i<matrix.size(); i++)
	{
		if(matrix[i][j]!=0)
		matrix[i][j]=-1;
	}
}
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	for(int i=0; i<matrix.size(); i++){
		for(int j=0; j<matrix[0].size(); j++){
			if(matrix[i][j]==0){
				changeRow(matrix, i);
				changeCol(matrix, j);
			}
		}
	}
	for(int i=0; i<matrix.size(); i++){
		for(int j=0; j<matrix[0].size(); j++){
			if (matrix[i][j] == -1)
			matrix[i][j] = 0;
        	}
	}
}
// TC = O(n*m*(n+m)) + O(n*m) 

// SC = O(1) as no extra space was used

