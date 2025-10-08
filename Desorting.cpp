// https://codeforces.com/problemset/problem/1853/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t){
        int n ; 
        cin >> n;
        int arr[n] ; 
        int dummy[n] ; 
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
            dummy[i] = arr[i];
        }
        sort(arr,arr+n);
        bool isSorted = true;
        for(int i = 0 ; i < n ; i ++){
            if(arr[i] != dummy[i]){
                isSorted = false;
            }
        }
        if(!isSorted){
            cout << 0 << endl;
        }else{
            int minGap=arr[1]-arr[0];
            for(int i = 1 ; i<n-1 ; i++){
                if(arr[i+1]-arr[i] < minGap){
                    minGap = arr[i+1] - arr[i];
                }
            }
            cout << (minGap/2)+1 << endl;
        }
        t--;
    }
}