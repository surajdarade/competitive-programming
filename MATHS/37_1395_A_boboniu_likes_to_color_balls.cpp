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

bool canFormPalindrome(int r, int g, int b, int w) {
    int oddCount = (r % 2) + (g % 2) + (b % 2) + (w % 2);

    if (oddCount <= 1) return true;

    if (r > 0 && g > 0 && b > 0) {
        oddCount = ((r - 1) % 2) + ((g - 1) % 2) + ((b - 1) % 2) + ((w + 3) % 2);
        if (oddCount <= 1) return true;
    }

    return false;
}

int main() {
    
    fastio
    
    cint
    
    while (t--) {
        int r, g, b, w;
        cin >> r >> g >> b >> w;

        if (canFormPalindrome(r, g, b, w)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}