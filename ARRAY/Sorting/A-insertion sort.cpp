#include <iostream>
using namespace std;

void insertionSort(int a[], int n){
    int i=0, j=1; 
    
    while(j<n){
        while(a[j]>a[j-1] && j<n){
            j++;
        }
        
        i=j;
        while(a[i]<a[i-1] && i>0){
            swap(a[i], a[i-1]);
            i--;
        }
        j++;
    }
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	
	insertionSort(a, n);
	
	for(int i=0; i<n; i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
	return 0;
}
