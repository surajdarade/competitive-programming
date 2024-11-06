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

int main() {
    fastio
    
    cint
    
    while(t--) {
        int n, x;
        cin >> n >> x;
        
        if(n>0&&n<=2) {
            cout << 1 br;
            continue;
        }
        else {
            int f = 2;
            int lastRoom = 2;  
            while (true) {
                int floorStart = lastRoom + 1;
                int floorEnd = floorStart + x - 1;

                if (n >= floorStart && n <= floorEnd) {
                    cout << f << endl;
                    break;
                }

                lastRoom = floorEnd;
                f++;
            }
        }
    }

    return 0;

}