#include <bits/stdc++.h>
using namespace std;
#define ll long long

int print(int n, int sum){
    
    if(n==0 || n==1)
    return n; //print(0) ki value will be 0, and print(1) ki value will be 1.
    
    else
    sum = n + print(n-1, sum);

    return sum;
}

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	
	cout<<print(n, 0);
}
