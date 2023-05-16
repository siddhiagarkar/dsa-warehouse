#include <bits/stdc++.h>
using namespace std;
#define ll long long

int search(int n, int a[], int z){
    for(int i=0; i<n; i++){
        if(a[i]==z)
        return 1;
    }
    return 0;
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
	
	int res = search(n, a, z);
	if(res==1)
	cout<<"Found"<<endl;
	else
	cout<<"Not present"<<endl;
	
	return 0;
}
