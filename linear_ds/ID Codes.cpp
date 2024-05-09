#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string code;
    
    while (cin >> code){
        if (code == "#") break;    
    
        if (next_permutation(code.begin(), code.end()))
            cout << code;
        else
            cout << "No Successor";
        cout << endl;
    }
}