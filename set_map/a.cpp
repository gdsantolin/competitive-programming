#include <iostream>
#include <map>
#include <set>
#include <cstdio>
using namespace std;


void caso(int t) {
    int n, m, a;
    
    cin >> n;
    
    map<int,int> mapSelos;
    set<int> setAmigos[n];
        
    for(int i = 0; i < n; i++) {
        cin >> m;

        while(m--) {
            cin >> a;

            if (setAmigos[i].find(a) == setAmigos[i].end())
                mapSelos[a]++;

            setAmigos[i].insert(a);
        }
    }

    
    int diferentes = 0;
    for (auto i : mapSelos)
        if (i.second == 1) diferentes++;
    

    cout << "Case " << t << ":";

    for(int i = 0; i < n; i++) {
        int unicos = 0;

        for (int elem : setAmigos[i])
            if (mapSelos[elem] == 1)
                unicos++;
        
        printf(" %.6f%%", unicos * 100.0/diferentes);
    }

    cout << endl;
}



int main(void) {
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) 
        caso(i);

}
