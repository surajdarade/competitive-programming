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
bool isprime(const ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 or n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6)
        if (n % i == 0 or n % (i + 2) == 0)
            return false;
    return true;
}
int gcd(ll a,ll b)
{
    while(a!=0)
    {
        if(a<b)
            swap(a,b);
        a=a%b;
    }
    return b;
}
int lcm(ll a, ll b)
{
    return a*b/gcd(a,b);
}
bool descending(int x, int y)
{
    return x > y;
}
bool compare(pair<ll,ll>&a,pair<ll,ll>&b)
{
    return (a.first<=b.first);
    //return (a.first>b.first) || (a.first==b.first && a.second>b.second);
}
bool vecfind(vector<ll>ra,ll x)
{
    if(find(ra.begin(),ra.end(),x)!=ra.end())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    fastio
    ll t,l,i,k,maxx;
    string ra;
    cin>>t;
    while(t--)
    {
        maxx=0;
        cin>>l>>ws>>ra;
        For(i,l)
        {
            if(ra[i]=='1')
            {
                maxx=max(maxx,max(i+1,l-i));
            }
        }
        maxx*=2;
        maxx=max(maxx,l);
        cout<<maxx br;
    }
    return 0;
}