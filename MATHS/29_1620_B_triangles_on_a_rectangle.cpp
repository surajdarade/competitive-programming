#include <bits/stdc++.h>
#include <string.h>
#define ll long long int
#define cint \
    int t;   \
    cin >> t;
#define br << endl;
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
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

    fastio

    ll t,n, m, w, h, p, u, i, j, x, y, k, l, g, z;
    cin >> t;
    while (t--) {
        cin >> w >> h;
        cin >> k;
        ll a[k];
        for (i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        cin >> l;
        ll b[l];
        for (i = 0; i < l; i++)
        {
            cin >> b[i];
        }

        x = a[k - 1] - a[0];
        y = b[l - 1] - b[0];
        p = max(x, y) * h;

        cin >> m;
        ll c[m];
        for (i = 0; i < m; i++)
        {
            cin >> c[i];
        }
        cin >> n;
        ll d[n];
        for (i = 0; i < n; i++)
        {
            cin >> d[i];
        }

        z = c[m - 1] - c[0];
        g = d[n - 1] - d[0];

        u = max(z, g) * w;

        cout << max(u, p) << endl;
    }

    return 0;
}