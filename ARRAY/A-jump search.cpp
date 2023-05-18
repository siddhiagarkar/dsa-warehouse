#include <bits/stdc++.h>
using namespace std;
#define ll long long

int linearsearch(int h, int a[], int target, int i)
{
    if(i==h+1)//remember i has to go from l to h
    return 0;
    
    else if(a[i]==target)
    return 1;
    
    i++;
    return linearsearch(h, a, target, i);
}

int jumpsearch(int n, int l, int h, int jump, int a[], int target){
    if(target<a[h])
    return linearsearch(h, a, target, l);
    
    else if(target==h)
    return 1;
    
    return jumpsearch(n, h, l+jump, jump, a, target);
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
	
	int jump;
	if(n%2!=0)
	jump=n/2;
	else
	jump=(n-1)/2;
	
	if(jumpsearch(n, 0, jump, jump, a, target)==0)
	cout<<"not found"<<endl;
	
	else
	cout<<"found"<<endl;
	return 0;
}
