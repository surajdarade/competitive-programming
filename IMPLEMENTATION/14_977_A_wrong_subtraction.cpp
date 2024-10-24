#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    
    int num, op;
    
    cin >> num >> op;
    
    while(op--) {
        
        int last = num % 10;
        
        if(last > 0) {
            num--;
        }
        
        else {
            num /= 10;
        }
        
    }
    
    cout << num << endl;
    
    return 0;
}