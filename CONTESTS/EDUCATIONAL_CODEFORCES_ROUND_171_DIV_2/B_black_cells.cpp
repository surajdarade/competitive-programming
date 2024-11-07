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

bool isPossible(int n, const vector<long long>& positions, long long maxDifference) {
    vector<bool> dpSkipZero(n + 1, false);
    vector<bool> dpSkipOne(n + 1, false);
    dpSkipZero[0] = true;
    dpSkipOne[0] = false;

    for(int i = 0; i < n; ++i) {
        vector<bool> newDpZero(n + 1, false);
        vector<bool> newDpOne(n + 1, false);

        if (dpSkipZero[i]) {
            if (i + 1 < n && abs(positions[i + 1] - positions[i]) <= maxDifference) {
                newDpZero[i + 2] = true;
            }
            if (maxDifference >= 1) {
                newDpOne[i + 1] = true;
            }
        }

        if (dpSkipOne[i]) {
            if (i + 1 < n && abs(positions[i + 1] - positions[i]) <= maxDifference) {
                newDpOne[i + 2] = true;
            }
        }

        for(int j = 0; j <= n; ++j) {
            if (newDpZero[j]) dpSkipZero[j] = true;
            if (newDpOne[j]) dpSkipOne[j] = true;
        }
    }

    return dpSkipZero[n] || dpSkipOne[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int testCases;
    cin >> testCases;

    while(testCases--) {
        int n;
        cin >> n;
        
        vector<long long> positions(n);
        for(auto &position : positions) {
            cin >> position;
        }

        long long left = 0, right = 1e18;
        long long result = right;

        while (left <= right) {
            long long mid = left + (right - left) / 2;

            if (isPossible(n, positions, mid)) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        cout << result << "\n";
    }

    return 0;
}