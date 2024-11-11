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

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

bool isDivisible(const string &a, const string &b) {
    if (a.size() % b.size() != 0) return false;
    string repeatedB = "";
    for (int i = 0; i < a.size() / b.size(); ++i) {
        repeatedB += b;
    }
    return repeatedB == a;
}

int main() {
    
    fastio
    
    cint

    while (t--) {
        string s, t;
        cin >> s >> t;

        int len_s = s.size();
        int len_t = t.size();

        int lcm_len = lcm(len_s, len_t);

        string s_lcm = "", t_lcm = "";

        for (int i = 0; i < lcm_len / len_s; ++i) s_lcm += s;
        for (int i = 0; i < lcm_len / len_t; ++i) t_lcm += t;

        if (s_lcm == t_lcm) {
            cout << s_lcm << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}