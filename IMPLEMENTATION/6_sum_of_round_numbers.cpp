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
    
    int t;
    
    cin >> t;
    
    while(t--) {
        
        int n;
        int terms = 0;
        int place = 1;
        
        vector<int> ans;
        
        cin >> n;
        
        while(n > 0) {
            
            int last = n % 10;
            n /= 10;
            
            if(last != 0) {
                terms += 1;
                int num = last * place;
                ans.push_back(num);
            }
            
            place *= 10;
            
        } 
        
        cout << terms << endl;
        
        for(int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        
        cout << endl;
        
    }
    
    return 0;

}