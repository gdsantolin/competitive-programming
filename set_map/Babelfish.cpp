#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    map<string, string> m;
    
    string s1, s2;
    getline(cin, s1);
    
    while (!s1.empty()){
        stringstream linha(s1);
        
        linha >> s1 >> s2;
        m[s2] = s1;
        
        getline(cin, s1);
    }
    
    while(cin >> s1){
        if(m.find(s1) == m.end()) cout << "eh" << endl;
        else cout << m[s1] << endl;
    }
}
