#include <bits/stdc++.h>
using namespace std;
#define ll long long

int fac(int n, int product){
    
    if(n==0)
    return 1;
    
    else if(n==1)
    return 1;
    
    else{
        product = n * fac(n-1, product); //note that the n decrements by one for every function call.
        return product;
    }
    
}

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	
	cout<<fac(n, 1);
}
