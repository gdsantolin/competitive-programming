#include<iostream>
#include<string>
#include<algorithm>
#include<set>
using namespace std;


int calc(long long n, long long k){
	set<long long> s;
	long long max = -1;
	if (max < k) max = k;
	
	while (true){
	    k *= k;
        k = stoi(to_string(k).substr(0, n));
        if (max < k) max = k;
        if (s.find(k) != s.end()) break;
        s.insert(k);
	}
	return max;
}

int main(){
	long long n, k, t;
	cin >> t;

	while(t--){
		cin >> n >> k;
		if (k < 2)
			cout << k << endl;
		else	
			cout << calc(n, k) << endl;
	}
}