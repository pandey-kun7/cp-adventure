//https://codeforces.com/problemset/problem/1901/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t ;
    while(t){
        int n,x;
        cin >> n >> x;
        int arr[n+1];
        arr[0] = 0;
        for(int i = 1; i<n+1 ; i++){
            cin >> arr[i];
        }
        long long max_dist = 2*(x-arr[n]);
        for(int i=0 ; i<n ; i++){
            if(arr[i+1]-arr[i]>max_dist){
                max_dist=arr[i+1]-arr[i];
            }
        }
        cout << max_dist << endl;

        t--;
    }

}
