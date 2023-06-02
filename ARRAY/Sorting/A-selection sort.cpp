#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	
	int min;
	int temp;
	int pos;
	
	for(int i=0; i<n; i++){
	    min = a[i+1];
	    for(int j=i+1; j<n-1; j++){
	        if(a[j+1]<min){
	        min = a[j+1];
	        pos = j+1;
	        }
	    }
	    if(min<a[i])
	    {
	        temp = a[i];
	        a[i] = min;
	        a[pos] = temp;
	    }
	}
	
	for(int i=0; i<n; i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}

// TC: O(n^2)
