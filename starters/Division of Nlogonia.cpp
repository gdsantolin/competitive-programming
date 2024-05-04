#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int k, dx, dy;
    while(1){
        cin >> k;
        if(k == 0) break;
        cin >> dx >> dy;
        for(int i = 0; i < k; i++){
            int x, y;
            cin >> x >> y;

            if(x > dx && y > dy) printf("NE\n");
            else if(x > dx && y < dy) printf("SE\n");
            else if(x < dx && y > dy) printf("NO\n");
            else if(x < dx && y < dy) printf("SO\n");
            else printf("divisa\n");
        }
    }
    
}