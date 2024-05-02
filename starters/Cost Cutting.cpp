#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    int t, a, b, c;
    
    cin >> t;
    
    for (int i = 0; i < t; i++){
        cin >> a >> b >> c;
        
        printf("Case %d: ", i+1);
        
        if ((a > b && a < c) || (a > c && a < b))
            printf("%d\n", a);
        else if ((b > a && b < c) || (b < a && b > c))
            printf("%d\n", b);
        else
            printf("%d\n", c);
    }
}