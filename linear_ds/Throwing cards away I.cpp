#include <iostream>
#include <stack>
#include <string>
#include <stdio.h>
#include <math.h>
#include <list>
using namespace std;

int main(){
    int n;
    
    while(cin >> n){
        if(n == 0) break;
        
        list<int> bar;
        list<int> aux;
    
        for(int i = 1; i <= n; i++) 
            bar.push_back(i);
        
        while(bar.size() > 1){
            aux.push_back(bar.front());
            bar.pop_front();
            
            bar.push_back(bar.front());
            bar.pop_front();
        }
        cout << "Discarded cards:";
        bool primeiro = 1;
        for(auto i : aux){
            if(primeiro){
                primeiro = false;
                cout << " ";
            } 
            else cout << ", "; 
            cout << i;
        } 
        cout << endl << "Remaining card: " <<  bar.front() << endl;
    }
}