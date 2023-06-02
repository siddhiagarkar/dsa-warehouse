#include <iostream>
using namespace std;

void bubblesort(int a[], int n){//assume 1 2 3 4 5
    if(n==0 || n==1)
    return;
    
    for(int j=0; j<n; j++){
        if(a[j+1]<a[j])
        swap(a[j+1], a[j]);
    }// this way 5 reaches the end
    
    bubblesort(a, n-1);//continue doing this for more elements so that they reach their ends
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	
	bubblesort(a, n);
	
	for(int i=0; i<n; i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
