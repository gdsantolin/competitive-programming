#include <climits>
#include <algorithm>
#include<iostream>

using namespace std;

struct Node {
    int first_max;
    int second_max;
    
    Node() {
        first_max = INT_MIN;
        second_max = INT_MIN;
    }
};

void buildRec(Node* T, int* A, int node, int start, int end) {
    if(start == end) {
        T[node].first_max = A[start];
    } else {
        int mid = (start + end) / 2;
        buildRec(T, A, 2 * node, start, mid);
        buildRec(T, A, 2 * node + 1, mid+1, end);
        
        T[node].first_max = max(T[2 * node].first_max, T[2 * node + 1].first_max);
        T[node].second_max = min(max(T[2 * node].first_max, T[2 * node + 1].second_max),
                                 max(T[2 * node].second_max,T[2 * node + 1].first_max));
    }
}

void build(Node *T, int *A, int n) {
    buildRec(T, A, 1, 0, n-1);
}

Node queryRec(Node *T, int node, int start, int end, int l, int r) {
    if(r < start or end < l) {
        Node nullNode;
        return nullNode;
    }
    if(l <= start and end <= r){
        return T[node];
    }
    
    int mid = (start + end) / 2;
    Node p1 = queryRec(T, 2 * node, start, mid, l, r);
    Node p2 = queryRec(T, 2 * node + 1, mid + 1, end, l, r);
    
    Node result;
    result.first_max = max(p1.first_max, p2.first_max);
    result.second_max = min(max(p1.first_max, p2.second_max),
                             max(p2.first_max, p1.second_max));
    return result;
}

Node query(Node* T, int n, int l, int r) {
    return queryRec(T, 1, 0, n-1, l, r);
}

void updateRec(Node* T, int* A, int node, int start, int end, int idx, int val) {
    if(start == end) {
        A[idx] = val;
        T[node].first_max = val;
    } else {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid) {
            updateRec(T, A, 2 * node, start, mid, idx, val);
        } else {
            updateRec(T, A, 2 * node + 1, mid + 1, end, idx, val);
        }
        
        T[node].first_max = max(T[2 * node].first_max, T[2 * node + 1].first_max);
        T[node].second_max = min(max(T[2 * node].first_max, T[2 * node + 1].second_max),
                                 max(T[2 * node + 1].first_max, T[2 * node].second_max));
    }
}

void update(Node *T, int *A, int n, int idx, int val) {
    updateRec(T, A, 1, 0, n - 1, idx, val);
}

int main() {
    int n, q;

    cin >> n;
    int A[n];
    Node T[4*n];

    for(int i = 0; i < n; i++)
        cin >> A[i];
    
    build(T, A, n);

    cin >> q;
    while(q--) {
        string op;
        int a, b;
        cin >> op >> a >> b;

        if(op == "U") {
            update(T, A, n, a-1, b);
        } 
        if(op == "Q") {
            Node result = query(T, n, a-1, b-1);
            cout << result.first_max + result.second_max << endl;
        }
    }
}
