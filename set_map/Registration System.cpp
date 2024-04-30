#include <iostream>
#include <map>
#include <string>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    string s;
    map<string, int> m;
    
    cin >> n;
    while(n--){
        cin >> s;
        if (m.find(s) == m.end()) cout << "OK" << endl;
        else cout << s << m[s] << endl;;
        m[s]++;
    }
}