#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    
    string num;
    
    cin >> num;
    
    int count = 0;
    
    for(int i = 0; i < num.size(); i++) {
        if(num[i] == '4' || num[i] == '7')
            count += 1;
    }
    
    if(count == 4 || count == 7) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
 
    return 0;
}