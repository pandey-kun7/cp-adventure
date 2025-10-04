//https://codeforces.com/problemset/problem/1788/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n; 
        int arr[n];
        for(int i=0; i<n;i++){
            cin >> arr[i];
        }
        int tl2=0;
        for(int i=0; i<n;i++){
            if(arr[i]==2){
                tl2++;
            }
        }
        if(tl2>0 && tl2%2!=0){
            cout << -1 << endl;
        }else if(tl2==0){
            cout << 1 << endl;
        }else{
            int index;
            int ind = tl2/2;
            for(int i = 0; i<n ; i++){
                if(ind){
                    if(arr[i]==2){
                        index = i;
                        --ind;
                    }
                }else{
                    break;
                }
            }
            cout << index+1 << endl;
        }
        t--;
    }
}