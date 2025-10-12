// https://codeforces.com/problemset/problem/1777/A

#include<bits/stdc++.h>
using namespace std;

int parity(int i){
    if(i%2==0){
        return 1;
    }else{
        return 0;
    }
}

int main (){
    int t;
    cin >> t;
    while(t--){
        int ops = 0;
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i<n ; i++){
            cin >> arr[i];
        }
        for(int i = 0 ; i<n-1 ; i++){
            if(parity(arr[i])==parity(arr[i+1])){
                ops++;
            }
        }
        cout << ops << endl;
    }
}