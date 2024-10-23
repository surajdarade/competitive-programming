#include <bits/stdc++.h>
#include <string.h>
#define ll long long int
#define cint int t; cin >> t;
#define br << endl;
#define no "NO"
#define yes "YES"
#define vecint vector<int>
#define vecll vector<long long int>
#define vecstring vector<string>
#define push push_back
#define decimal(n) cout << fixed << setprecision(n);
#define For(i, n) for (ll i = 0; i < n; i++)
#define Forran(i, n, a) for (ll i = n + 1; i <= a; i++)
#define Forrevran(i, n, a) for (ll i = n - 1; i >= a; i--)
#define Forrev(i, n) for (ll i = n - 1; i >= 0; i--)
#define total(v) accumulate(v.begin(), v.end(), 0)
#define diff(ax, ay, bx, by) abs(ax - bx) + abs(ay - by)
#define distance(ax, ay, bx, by) pow((ax - bx) * (ax - bx) + (ay - by) * (ay - by), 0.5)
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;

int main() {
    
    long long n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 
    long long total_drink = k * l;
    long long total_limes = c * d;
    long long total_salt = p;
 
    long long max_toasts_drink = total_drink / nl;
    long long max_toasts_limes = total_limes;
    long long max_toasts_salt = total_salt / np;
 
    long long max_toasts = min({max_toasts_drink, max_toasts_limes, max_toasts_salt});
 
    long long toasts_per_friend = max_toasts / n;
 
    cout << toasts_per_friend << endl;

    return 0;

}