#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    
    int k, n, w;
    
    cin >> k >> n >> w;
    
    int dollars = 0;
    
    for(int i = 0; i < w; i++) {
        
        dollars += (i + 1) * k;
 
    }
    
    if(dollars > n) {
        cout << dollars - n;
    }
    else {
        cout << "0";
    }
    
    return 0;
}