// https://codeforces.com/problemset/problem/1829/B

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        int arr[n];
        int space=0;
        int second=0;
        for(int i = 0 ; i<n ; i++ ){
            cin >> arr[i];
        }
        for(int i = 0; i<n ; i++){
            if (arr[i]==0){
                second++;
            }else{
                if(second>=space){
                    space = second;
                    second = 0;
                }else{
                    second = 0;
                }
            }
        }
        cout << max(space,second) << endl;
 
        t--;
    }
}