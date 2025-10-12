#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k ;
        cin >> n >> k;
        int arr[n];
        bool isPresent = false;
        for(int i = 0 ; i< n ; i ++){
            cin >> arr[i];
            if(arr[i]==k){
                isPresent = true;
            }
        }
        if(isPresent){
            cout << "YES" <<endl;
        }else{
            cout << "NO" << endl;
        }
    }
}