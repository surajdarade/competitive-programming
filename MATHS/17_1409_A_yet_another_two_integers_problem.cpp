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
        int a, b;
        
        cin >> a >> b;
        
        if(a==b) {
            cout << "0" br
            continue;
        }
        
        int diff = abs(a-b);
        
        int moves = 0;
        
        int n = 1;
        
        while(diff > 0) {
            int lastDigit = diff % 10;
            
            if((lastDigit*n)%10==0) {
                moves += (lastDigit*n) / 10;
            }
            else {
                moves++;
            }
            
            n*=10;
            diff/=10;
            
        }
        
        cout << moves br
    }
 
    return 0;
 
}