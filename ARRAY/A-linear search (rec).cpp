#include <bits/stdc++.h>
using namespace std;
#define ll long long

int search(int n, int a[], int target, int i){
    if(n==0)
    return 0;
    
    else if(a[i]==target)
    return 1;
    
    else if(i==n-1)
    return 0;
    
    return search(n, a, target, i+1);
    
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	
	int target;
	cin>>target;
	
	if(search(n, a, target, 0)==0)
	cout<<"not found"<<endl;
	
	else
	cout<<"found"<<endl;
	return 0;
}
