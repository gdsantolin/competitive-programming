#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v;
        while(n--){
            int x;
            cin >> x;
            v.push_back(x);
        }
        if(next_permutation(v.begin(), v.end()))
            for(auto i : v) cout << i;
        else
            cout << "-1";
        cout << endl;
    }
}