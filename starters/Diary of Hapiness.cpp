#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n = 0, soma = 0, aux = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> aux;
        soma += aux;
    }
    if(soma > 0) printf(":)");    
    if(soma == 0) printf(":|");   
    if(soma < 0) printf(":(");   
}