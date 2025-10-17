// https://codeforces.com/problemset/problem/1857/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int oddcount =0 ;
        for(int i = 0 ; i < n ; i ++){
            cin >> arr[i];
            if(arr[i]%2!=0){
                oddcount+=1;
            }
        }
        if(oddcount%2==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" <<endl;
        }
    }
}