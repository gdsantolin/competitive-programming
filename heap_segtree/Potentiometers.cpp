#include<iostream>
#include<string>

using namespace std;

void buildRec(int* T, int* A, int node, int start, int end) {
    if(start == end) {o
        T[node] = A[start];
    } else {
        int mid = (start + end) / 2;
        buildRec(T, A, 2 * node, start, mid);
        buildRec(T, A, 2 * node + 1, mid+1, end);
        T[node] = T[2 * node] + T[2 * node + 1];        
    }
}

void build(int *T, int *A, int n) {
    buildRec(T, A, 1, 0, n-1);
}

int queryRec(int *T, int node, int start, int end, int l, int r) {
    if(r < start or end < l) {
        return 0;                                     
    }
    if(l <= start and end <= r){
        return T[node];
    }
    int mid = (start + end) / 2;
    int p1 = queryRec(T, 2 * node, start, mid, l, r);
    int p2 = queryRec(T, 2 * node + 1, mid + 1, end, l, r);
    return (p1 + p2);                                
}

int query(int* T, int n, int l, int r) { 
    return queryRec(T, 1, 0, n-1, l, r);
}

void updateRec(int* T, int* A, int node, int start, int end, int idx, int val) {
    if(start == end) {
        A[idx] = val;
        T[node] = val;
    } else {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid) {
            updateRec(T, A, 2 * node, start, mid, idx, val);
        } else {
            updateRec(T, A, 2 * node + 1, mid + 1, end, idx, val);
        }
        T[node] = T[2 * node] + T[2 * node + 1];        
    }
}

void update(int *T, int *A, int n, int idx, int val) {
    updateRec(T, A, 1, 0, n - 1, idx, val);
}

int main() {
    int n, caso = 1, x, y; 
    string op;
                
    while(cin >> n){
        int A[n], T[4*n];
        
        if(n == 0) break;
        
        for(int i = 0; i < n; i++)
            cin >> A[i];
        
        build(T, A, n);  
        
        if(caso != 1) cout << endl;    
        cout << "Case " << caso++ << ":" << endl;   
        
        while(cin >> op, op != "END"){
            cin >> x >> y;
            
            if(op == "M")
                cout << query(T, n, x-1, y-1) << endl;
            
            if(op == "S")
                update(T, A, n, x-1, y);
        }
        
    }

}