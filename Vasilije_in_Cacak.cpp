// https://codeforces.com/problemset/problem/1878/C

// here i was using the long method but then got to know i just had to find the min and max sums i can get
// with that i can distribute the x in ks
// its not that hard, just another way of looking matters

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k,x;
        cin >> n >> k >> x;
        long long s = k*n - ((((k-1)*(k-1))+k-1)/2);
        if(x>s){
            cout << "NO" << endl;
        }else if(x<(((k*k)+k)/2)){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
}