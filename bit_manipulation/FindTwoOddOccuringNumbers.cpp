#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
using namespace std;

#ifdef LOCAL
	#define eprintf(...) fprintf(stderr, __VA_ARGS__);fflush(stderr);
#else
	#define eprintf(...) 42
#endif

using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
template<typename T>
using pair2 = pair<T, T>;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll myRand(ll B) {
	return (ull)rng() % B;
}

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

ll n, m, q, k, l, r, x, y, z;
const ll template_array_size = 100005;
ll a[template_array_size];
ll b[template_array_size];
ll c[template_array_size];
string s, t;

void solve() {
    // Get the input number of elements in the array
    cin >> n;
    // Get the all the numbers in the array
    for(ll i=0; i < n; i++) cin >> a[i];
    
    ll res = 0;
    // find the xor of all the elements in the array
    for(ll i=0; i<n; i++) res ^= a[i];

    // Get the rightmost set bit (it can't be 0, since both the elements occur odd number of times)
    // This will give the result of the 2 odd occuring numbers, which has the 
    ll rightMost = res & (~(res-1));
    
    // Now we can divide the elements into 2 sets and find the result easily
    ll res1 = 0, res2 = 0;
    for (ll i=0; i<n; i++){
        if (a[i]&rightMost != 0){
            res1 ^= a[i];
        }
        else{
            res2 ^= a[i];
        }
    }
    cout << res1 << " " << res2;
}

int main()
{
	startTime = clock();

	int t;
	scanf("%d", &t);

	for (int i = 1; i <= t; i++) {
        solve();
	}


	return 0;
}
