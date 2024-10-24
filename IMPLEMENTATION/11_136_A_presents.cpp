#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    int op[n];
    
    for(int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        
        op[a - 1] = i;
    }
    
    for(int i = 0; i < n; i++) {
        cout << op[i] << " ";
    }
 
    return 0;
}