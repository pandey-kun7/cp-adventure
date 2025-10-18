// https://codeforces.com/contest/1862/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0 ; i<n; i++){
            cin >> a[i];
        }
        vector<long long> b(2*n);
        int index = 1;
        b[0] = a[0];
        for(int i = 1 ; i<n ; i++){
            if(a[i]>=a[i-1]){
                b[index] = a[i] ;
                index++;
            }else{
                b[index] = a[i];
                b[index+1] = a[i];
                index+=2;
            }
        }
        cout << index << endl;
        for (int i = 0 ; i <index ; i++){
            cout << b[i] << " ";
        }
        cout << "\n";
    }
}