#include <bits/stdc++.h>
using namespace std;
#define ll long long

int binary_search(int n, int l, int r, int a[], int target){

        int m = (l+r)/2;
        
        if(l>r)
        return 0;
        
        else if(a[m]==target)
        return 1;
    
        else if(target<a[m])
        return binary_search(n, l, m-1, a, target);
        
        else if(target>a[m])
        return binary_search(n, m+1, r, a, target);
        
        return 0;
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
	
	if(binary_search(n, 0, n-1, a, target)==0)
	cout<<"not found"<<endl;
	
	else
	cout<<"found"<<endl;
	return 0;
}
