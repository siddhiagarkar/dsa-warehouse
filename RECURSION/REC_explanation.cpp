#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printFun(int test)
{
    if (test < 1)//base case
        return;//return ka kaam is to print the answer obtained in the previous f call
    else {
        cout << test << " "; //ASCENDING ORDER(before the function call)
        printFun(test - 1); // statement 2
        cout << test << " "; //DESCENDING ORDER(after the function call)
        return;
    }
}
 
// Driver Code
int main()
{
    int test = 3;
    printFun(test);
}
