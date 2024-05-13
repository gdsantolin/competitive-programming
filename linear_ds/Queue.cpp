#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, res = 0, tempo = 0;
    
    cin >> n;
    int v[n];
    
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v, v + n);
    
    for(int i = 0; i < n; i++){
        if(tempo <= v[i]){
            res++;
            tempo += v[i];
        }
    }
    
    cout << res << endl;
}