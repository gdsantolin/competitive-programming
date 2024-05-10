#include <iostream>  
#include <math.h>  

using namespace std;

int main(){

    int jolly;
    int n;
    int aux[4000];
    while(scanf("%d", &n) > 0){
        int arr[4000];
        for(int i = 0; i < n; i++){
            aux[i] = 0;
        }

        jolly = 1;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n-1; i++){
            aux[abs(arr[i] - arr[i+1])] = 1;
        }

        for(int i = 1; i <= n-1; i++){
            if(aux[i] == 0){
                jolly = 0;
            }
        }

        if(jolly) cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }
    
}
