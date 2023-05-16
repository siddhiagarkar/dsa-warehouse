#include <bits/stdc++.h>
using namespace std;
#define ll long long

int fib(int n){
    
    if(n==0)
    return 0;
    
    else if(n==1)
    return 1;
    
    else{
        int last = fib(n-1);
        int sec_last = fib(n-2);
        return last+sec_last;
    }
    
}

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++)
	cout<<fib(i)<<" ";
}
