#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    
    int t;
    
    cin >> t;
    
    int capacity = 0;
    int remain = 0;
    
    while(t--) {
        
        int a;
        int b;
        
        cin >> a >> b;
        
        remain = (remain - a) + b;
        
        capacity = max(capacity, remain);
        
    }
    
    cout << capacity << endl;
 
    return 0;
}