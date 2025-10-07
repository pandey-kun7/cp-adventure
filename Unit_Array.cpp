// https://codeforces.com/problemset/problem/1834/A


// ===================Note=====================
// calculated the occurences of -1s and 1s in the array
// reduced the minus var by -1 if minus is still > plus (i think an optimal approach can be used here)
// checked the occurence of -1 if modulo 2 gives 0 then okay otherwise -1 and change+=1

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t; 
    while(t){
        int  n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i<n ; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int minus= 0; int plus = 0;
        int changes= 0;
        for(int i = 0 ;i < n ; i ++) {
            if(arr[i]==-1){
                minus += 1;
            }else{
                plus = n - minus ; 
                break ; 
            }
        }
        while(minus > plus){
            minus--;
            changes++;
            plus++;
        }
        if(minus%2!=0){
            minus--;
            changes++;
        }
        cout << changes << endl;
        t--;
    }
}