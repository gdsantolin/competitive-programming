#include <iostream>
#include <set>
#include <string>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main() {
    bool continua = false;
    string p, aux = "";
    set<string> palavras;
    
    while (cin >> p) {
        for(char c : p){
            if(isalpha(c) || c == '-'){
                if(c == '-'){
                    if(p.back() == '-') continua = true;
                    else aux += c;
                }
                else aux += tolower(c);
            }
            else if (!aux.empty()) {
                palavras.insert(aux);
                aux = "";
            }
            
        }
        
        if(continua){
            continua = false;
            continue;
        }
        if(aux != "") palavras.insert(aux);
        aux = "";
    }
    if(aux != "") palavras.insert(aux);
    
    for(string s : palavras)
        cout << s << endl;
    
}