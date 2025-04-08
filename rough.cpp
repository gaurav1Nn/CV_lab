#include <bits/stdc++.h>
using namespace std;
const long long MOD = 998244353;
long long modp_g(long long b, long long e, long long mod) {
    long long r = 1;
    b %= mod;
     // gaurav
    while(e > 0) {
        if(e & 1)
            r = (r * b) % mod;
        b = (b * b) % mod;
        e >>= 1;
    }
     // gaurav
    return r;
}
void a() {
    long long n;
    cin >> n;
    long long ans = 0;
    if(n % 2 == 1) {
        long long k = (n - 1) / 2;
        ans = modp_g(4, k, MOD);
    } else {
        long long k = (n - 2) / 2;
        // gaurav
        ans = (3 * modp_g(4, k, MOD)) % MOD;
    }
    cout << ans << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
     // gaurav
    while(t--) {
        a();
    }
    return 0;
}