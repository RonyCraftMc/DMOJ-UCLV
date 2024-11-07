#include <bits/stdc++.h>
#define int long long 
#define Rony_Js signed
#define endl '\n'

using namespace std;






Rony_Js main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	int a, b;
    cin>>a>>b;
    int j = a;
    a/=2;
    a+=a%2;
    int res =abs( j - a);
    cout<<a+(res%(b-1));
	return 0;
	}