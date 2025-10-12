// https://codeforces.com/problemset/problem/1866/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    long long absMin = 100000;
    for(int i =0 ; i<n ; i++){
        cin >> arr[i];
        if(arr[i]==0){
            absMin=0;
            break;
        }
        if(abs(arr[i])<absMin){
            absMin = abs(arr[i]);
        }
    }
    cout << absMin << endl;
}