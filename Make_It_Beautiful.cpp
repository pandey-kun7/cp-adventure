//https://codeforces.com/problemset/problem/1783/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t ;
    while(t){
        int n;
        cin >> n ;
        int arr[n];
        for(int i = 0; i<n ; i++ ){
            cin >> arr[i];
        }
        for(int i = 0 ; i<n-1 ; i++){
            for(int j = 0 ; j<n-1 ; j++){
                if(arr[j]<arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        if(arr[1]==arr[0]){
            for(int i = 2 ; i<n ; i++){
                if(arr[1]!=arr[i]){
                    int temp = arr[1];
                    arr[1] = arr[i];
                    arr[i] = temp ;
                    break;
                }
            }
        }
        int prefix = 0;
        bool isBeautiful = true;
        for(int  i = 1 ; i<n ; i++){
            prefix += arr[i-1];
            if(prefix == arr[i]){
                isBeautiful = false;
                break;
            }
        }
        if(isBeautiful){
            cout << "YES" << endl;
            for(int j = 0 ; j<n ; j++){
                cout << arr[j] << " " ;
            }
        }else{ 
            cout << "NO" << endl; 
        }
        t--;
    }
}