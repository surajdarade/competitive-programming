#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define br <<"\n";
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
    
    char colon;
    int h1, m1, h2, m2;

    cin >> h1 >> colon >> m1;
    cin >> h2 >> colon >> m2;

    int totalMinutes1 = h1 * 60 + m1;
    int totalMinutes2 = h2 * 60 + m2;

    int midMinutes = (totalMinutes1 + totalMinutes2) / 2;

    int h3 = midMinutes / 60;
    int m3 = midMinutes % 60;

    if (h3 < 10) cout << "0";
    cout << h3 << ":";
    if (m3 < 10) cout << "0";
    cout << m3 << endl;

    return 0;

}