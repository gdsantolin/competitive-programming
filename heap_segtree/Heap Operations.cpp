#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;
vector<string> res;
int cont = 0;

void insert(int x){
    pq.push(x);
    res.push_back("insert " + to_string(x));
    cont++;
}

void removeMin(){
    if(pq.empty()) insert(0);
    pq.pop(); 
    res.push_back("removeMin");  
    cont++;
}

void getMin(int x){
    while(!pq.empty() && x != pq.top()){
        if(x < pq.top()) insert(x);
        else removeMin();
    }
    if(pq.empty() || x != pq.top()) insert(x);
    res.push_back("getMin " + to_string(x));
    cont++;
}

int main() {
    int n, x;
    string op;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> op;
        if(op != "removeMin") cin >> x;
        
        if(op == "insert")
            insert(x);
        if(op == "getMin")
            getMin(x);
        if(op == "removeMin")
            removeMin();
    }
    
    cout << cont << endl;
    for(auto i : res) cout << i << endl;
}
