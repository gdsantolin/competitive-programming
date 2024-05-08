#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum ^= arr[i];
        }
        
        if (sum == 0) 
            cout << 0 << endl;
            
        else {
            if (n % 2 == 1) 
                cout << sum << endl;
            else 
                cout << -1 << endl;
        }
        
    }
}
