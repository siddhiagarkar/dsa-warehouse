#include <bits/stdc++.h>
using namespace std;
#define ll long long

void reversal(int n, int i, int a[]){
    if(i==n/2)
    return; 
    
    swap(a[i], a[n-1-i]);
    reversal(n, i+1, a);
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	
	reversal(n, 0, a);
	for(int i=0; i<n; i++)
	cout<<a[i]<<" ";
	
	return 0;
}
