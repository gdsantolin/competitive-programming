#include <iostream>
#include <math.h>

using namespace std;


int main() {
    int n;
    
    while(cin >> n){
        if(n == 0) break;
        
        int cr = 0, cc = 0;
        int br = 0, bc = 0;
        int mat[100][100];
        
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> mat[i][j];
            }
        }
        
        for(int i = 1; i <= n; i++){
            int sr = 0;
            for(int j = 1; j <= n; j++){
                sr += mat[i][j];
            }
            if(sr % 2 != 0){
                cr++;
                br = i;
            }
        }
        for(int i = 1; i <= n; i++){
            int sc = 0;
            for(int j = 1; j <= n; j++){
                sc += mat[j][i];
            }
            if(sc % 2 != 0){
                cc++;
                bc = i;
            }
        }
        
        if(cr == 0 && cc == 0) cout << "OK";
        else if(cr == 1 && cc == 1) cout << "Change bit (" << br << "," << bc << ")";
        else cout << "Corrupt";
        cout << endl;
        
    }
    
}