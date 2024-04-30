#include <iostream>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
    int n;
    string s;
    map<string, int> m;
    
    cin >> n;
    while(n--){
        cin >> s;
        m[s]++;
    }
    
    int max = -1;
    string maxk;
    for (const auto& [k,v] : m) {
        if (v > max) {
            maxk = k;
            max = v;
        }
    }
    cout << maxk;
}