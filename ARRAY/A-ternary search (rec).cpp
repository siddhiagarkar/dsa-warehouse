#include <bits/stdc++.h>
using namespace std;
#define ll long long

int ternary_search(int n, int l, int r, int a[], int target){

        int m1 = l+(r-l)/2;
        int m2 = r-(r-l)/2;
        
        if(l>r)
        return 0;
        
        else if(a[m1]==target || a[m2]==target)
        return 1;
    
        else if(target<a[m1])
        return ternary_search(n, l, m1-1, a, target);
        
        else if(target>a[m2])
        return ternary_search(n, m2+1, r, a, target);
        
        else if(target>a[m1] && target<a[m2])
        return ternary_search(n, m1+1, m2-1, a, target);
        
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
	
	if(ternary_search(n, 0, n-1, a, target)==0)
	cout<<"not found"<<endl;
	
	else
	cout<<"found"<<endl;
	return 0;
}
