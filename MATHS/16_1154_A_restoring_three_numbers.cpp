#include <bits/stdc++.h>
#include <string.h>
#define ll long long int
#define cint \
    int t;   \
    cin >> t;
#define br << endl;
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
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
   vector<int> nums(4);
   for(int i = 0; i < 4; i++) {
       cin >> nums[i];
   }
   
   sort(nums.begin(), nums.end());
   
   for(int i = 0; i < 4; i++) {
       for(int j = i + 1; j < 4; j++) {
           for(int k = j + 1; k < 4; k++) {
               long long s1 = nums[i];
               long long s2 = nums[j];
               long long s3 = nums[k];
               long long total = nums[6 - i - j - k];
               
               long long a = (s1 + s3 - s2) / 2;
               long long b = (s1 + s2 - s3) / 2;
               long long c = (s2 + s3 - s1) / 2;
               
               if (a > 0 && b > 0 && c > 0 && 
                   a + b == s1 && b + c == s2 && a + c == s3 && 
                   a + b + c == total) {
                   cout << a << " " << b << " " << c << endl;
                   return 0;
               }
           }
       }
   }
   
   return 0;
}