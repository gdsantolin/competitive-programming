#include <iostream>
#include <set>
#include <string>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main() {
    int t, n, a;
    
    cin >> t;
    
    while(t--){
        cin >> n;
        
        set<int> s;
        int res = 0;
        
        while(n--){
            cin >> a;
            if(a % 2 == 0) s.insert(a);
        }
        
        while(!s.empty()){
            int i = *s.rbegin();
            
            s.erase(i);
            if(i % 2 == 0){
                res++;
                s.insert(i/2);
            }
        }
        
        cout << res << endl;
        
    }
}