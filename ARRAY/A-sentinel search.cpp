#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sentinel_search(int n, int a[], int z){
    int last;
    last=a[n-1];
    a[n-1]=z;
    
    int i=0;
    while(a[i]!=z)
    i++;
    
    if(i==n-1 && last!=z)
    return 0;
    else
    return 1;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	
	int z;
	cin>>z;
	
	int res = sentinel_search(n, a, z);
	if(res==1)
	cout<<"Found"<<endl;
	else
	cout<<"Not Found"<<endl;
	
	return 0;
}


