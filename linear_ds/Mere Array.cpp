#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, min;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n], aux[n];
        bool flag = true;
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            aux[i] = arr[i];
        }
        
        sort(arr, arr+n);
        min = arr[0];
        
        for(int i = 0; i < n; i++){
            if(aux[i] != arr[i]){
                if(arr[i] % min != 0){
                    flag = false;
                    break;
                }
            }
        }
        
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;   
    }
}
