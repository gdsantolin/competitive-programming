#include <iostream>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
    int n, s[500000];
    
    cin >> n;
    int res = n;
    
    for(int i = 0; i < n; i++) cin >> s[i];
    sort(s, s+n);
    
    
    for(int i = 0 , j = n/2; i < n/2 && j < n; j++){
        if(2*s[i] <= s[j]){
            res--;
            i++;
        } 
    }
    
    cout << res;
}