#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int res = n/k;
    if(n%k > 0) res++;
    printf("%d", res);
    
}