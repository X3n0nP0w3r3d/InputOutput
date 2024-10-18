#include <iostream>
 
using namespace std;

// The key observation is that i^i
//  has the same even/odd parity as i
//  Therefore, the problem reduces to finding whether the sum of k
//  consecutive integers ending in n
//  is even. This can be done by finding the sum of n−k+1,n−k+2,...,n−1,n
//  which is k∗(2n−k+1)/2
// , and checking its parity. Alternatively, one can count the number of odd numbers in those k
//  consecutive integers.

// Note: Originally, the number of leaves grown was to be im
//  according to the fractal nature of life where m
//  is set to some integer. Developers decided to replace m
//  with i
//  for simplicity, following Filikec's suggestion.
 
 
void work(){
    int n,k;
    cin >> n >> k;
 
    cout << (((n+1)*n/2 - (n-k)*(n-k+1)/2)%2?"NO":"YES") << '\n';
}
 
int main(){
 
    int t;
    cin >> t;
    while (t--) work();
    return 0;
}