#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
using namespace std;


int main(){
	long long n, a, b;
	while(cin >> n, n != 0){
	    cin >> a >> b;
	    map<int, int> m;
	    long long res = n, x = 0;
	    while(true){
	        m[x]++;
	        if(m[x] == 3) break;
	        if(m[x] == 2) res--;
	        x = (a*(x*x % n) % n + b) % n;
	    }
	    cout << res << endl;
	}
}