#include<bits/stdc++.h>
#include<string.h>
#define cint int t; cin >> t;
#define ll long long int
#define br << endl;
#define no "NO"
#define yes "YES"
#define vecint vector<int>
#define vecll vector<long long int>
#define vecstring vector<string>
#define push push_back
#define decimal(n) cout<<fixed<<setprecision(n);
#define For(i,n) for(ll i=0;i<n;i++)
#define Forran(i,n,a) for(ll i=n+1;i<=a;i++)
#define Forrevran(i,n,a) for(ll i=n-1;i>=a;i--)
#define Forrev(i,n) for(ll i = n-1; i >= 0; i--)
#define total(v) accumulate(v.begin(),v.end(),0)
#define diff(ax,ay,bx,by) abs(ax-bx)+abs(ay-by)
#define distance(ax,ay,bx,by) pow((ax-bx)*(ax-bx)+(ay-by)*(ay-by),0.5)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

bool f(int n, const vector<ll>& p, ll k) {
    vector<bool> dp0(n + 1, false);
    vector<bool> dp1(n + 1, false);
    dp0[0] = true;
    dp1[0] = false;

    for(int i = 0; i < n; ++i) {
        vector<bool> n0(n + 1, false);
        vector<bool> n1(n + 1, false);

        if(dp0[i]) {
            if(i + 1 < n && abs(p[i + 1] - p[i]) <= k) {
                n0[i + 2] = true;
            }
            if(k >= 1) {
                n1[i + 1] = true;
            }
        }

        if(dp1[i]) {
            if(i + 1 < n && abs(p[i + 1] - p[i]) <= k) {
                n1[i + 2] = true;
            }
        }

        for(int j = 0; j <= n; ++j) {
            if(n0[j]) dp0[j] = true;
            if(n1[j]) dp1[j] = true;
        }
    }

    return dp0[n] || dp1[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> p(n);
        for(auto &x : p) cin >> x;

        ll l = 0, r = (ll)1e18;
        ll ans = r;
        while(l <= r) {
            ll m = l + (r - l) / 2;
            if(f(n, p, m)) {
                ans = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}