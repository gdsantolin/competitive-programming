#include <iostream>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
    int n, a;
    map<int, int> m;
    
    cin >> n;
    while(n--){
        cin >> a;
        m[a]++;
    }
    
    int max = -1;
    for (const auto& [k,v] : m) 
        if (v > max) max = v;
        
    cout << max;
}