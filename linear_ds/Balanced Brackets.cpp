#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    int n, bom = 0;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        string linha;
        stack<char> st;
        
        cin >> linha;
        
        for (int i = 0; i < linha.length(); i++) {
            if (st.empty()) 
                st.push(linha[i]);
                
            else if ((st.top() == '(' && linha[i] == ')')
                    || (st.top() == '{' && linha[i] == '}')
                    || (st.top() == '[' && linha[i] == ']'))
                st.pop();
                
            else 
                st.push(linha[i]);
        }
        if (st.empty()) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
            
        }
}