#include <bits/stdc++.h>
#define endl '\n' 
#define int long long 
#define Valido return 0

using namespace std;

signed main() {

	vector<int>ps(1e5);
	ps[0] = 0;
	for (int i = 1; i <= 1e5; i++) {
		ps[i] = ps[i - 1] + i;
	}
	int n;
	cin >> n;
    if(n){
	for (int i = 1; i <= n; i++) {

		if (abs(ps[n] - ps[i]) == ps[i - 1]) {
			int k = abs(ps[i] - ps[i - 1]);
			cout << k << endl;
			break;

		}
	}
    
    
    }else cout<<0<<endl;


	Valido;

}