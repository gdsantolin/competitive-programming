#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        string s, aux;
        cin >> s;
        aux = s;
        next_permutation(s.begin(), s.end());
        if(s != aux) cout << "YES" << endl << s << endl;
        else cout << "NO" << endl;
    }
}