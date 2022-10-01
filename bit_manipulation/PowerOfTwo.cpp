#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// The program to check whether this is a power of 2
void solve(){
    int n; 
    cin >> n;
    // Powers of 2 are positive, starting from 1
    if (n<=0) cout << "No" << endl;
    // bitwise anding the adjacent elements of powers of 2 are 0
    // Because in powers of 2, there will be only one bit as set (i.e. only one bit will be one)
    else if((n&(n-1))==0){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}

int main(){
    solve();
}