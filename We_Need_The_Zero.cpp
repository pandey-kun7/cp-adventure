// https://codeforces.com/problemset/problem/1805/A

//======================== NOTE ========================
// this was my first obstacle and I had to see the editorial
// i had no clue about the answer
// the even/odd xor logic seems so simple  
// I won't forget it, that is for sure 


#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        int arr[n];
        int XOR = 0;
        for(int i = 0 ; i < n ; i ++){
            cin >> arr[i];
        }
        for( int i = 0 ; i < n ; i++){
            XOR = XOR ^ arr[i];
        }
        if(!XOR){
            cout << 0 << endl;
        }else{
            if(n%2==0){
                cout << -1 << endl;
            }else{
                cout << XOR << endl;
            }
        }
        t--;
    }
}