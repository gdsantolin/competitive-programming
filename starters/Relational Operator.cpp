#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    cin >> x;
    vector<char> l;

    while(x--){
        int a, b;
        cin >> a >> b;
        if (a > b) 
            l.push_back('>');
        else if (a < b) 
            l.push_back('<');
        else 
            l.push_back('=');
    }

    for (char i : l) 
        cout << i << endl;
    
}
