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

// const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;

ll n, m, q, k, l, r, x, y, z;
const ll template_array_size = 100005;
ll a[template_array_size];
ll b[template_array_size];
ll c[template_array_size];
string s, t;

// Function to convert a decimal to gray code
ll Gray(ll n){
    return n^(n>>1);
}

// Function to convert a Gray code to binary
ll Bin(ll n){
	ll res = 0;
    while (n > 0){
		res ^= n;
		n >>= 1;
	}
	return res;
}

void solve() {
    cin >> n;
    ll gray = Gray(n);
    ll bin = Bin(gray);
    cout << n << " "<< gray << " " << bin << "\n";
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
