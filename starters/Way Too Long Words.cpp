#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main(){
    int n;
    string w;
    cin >> n;
    getline(cin, w);
    for(int i = 0; i < n; i++){
        getline(cin, w);

        if(w.size() > 10){
            cout << w[0] << w.size()-2 << w.back() << endl;
        }
        else cout << w << endl;
    }
    
}