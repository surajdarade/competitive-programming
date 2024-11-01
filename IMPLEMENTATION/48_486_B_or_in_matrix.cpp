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
    
    int m, n;
    cin >> m >> n;

    vector<vector<int>> B(m, vector<int>(n));
    vector<vector<int>> A(m, vector<int>(n, 1));  

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (B[i][j] == 0) {
                for (int k = 0; k < n; k++) {
                    A[i][k] = 0;
                }
                for (int k = 0; k < m; k++) {
                    A[k][j] = 0;
                }
            }
        }
    }

    bool valid = true;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int or_result = 0;
            for (int k = 0; k < n; k++) {
                or_result |= A[i][k];  
            }
            for (int k = 0; k < m; k++) {
                or_result |= A[k][j];  
            }
            if (or_result != B[i][j]) {
                valid = false;
                break;
            }
        }
        if (!valid) break;
    }

    if (valid) {
        cout << "YES" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;

}