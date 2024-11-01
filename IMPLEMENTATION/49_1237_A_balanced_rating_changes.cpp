#include <bits/stdc++.h>
#include <string.h>
#define ll long long int
#define br << "\n";
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

    fastio

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int flag=0;
    for(int j=0; j<n; j++)
    {
        float k=(double)a[j]/2;
        if((a[j]%2)!=0)
        {
            if(flag==0)
            {
                a[j]=ceil(k);
                flag=1;
            }
            else if(flag==1)
            {
                a[j]=floor(k);
                flag=0;
            }
        }
        else
            a[j]=a[j]/2;
    }

    for(int i=0; i<n; i++)
        cout<<a[i]<<endl;

    return 0;

}