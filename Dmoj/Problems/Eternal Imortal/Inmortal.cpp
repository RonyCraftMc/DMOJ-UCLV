#include <bits/stdc++.h>
#define int long long 
#define Rony_Js signed
#define endl '\n'

using namespace std;
int i ;
Rony_Js main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		
		int a, b;
		cin>>a>>b;
		int s = 1;
		for( i = a+1; i<=b; i++){
            
			s*=i;
			s%=10;
			
			}
		string str= to_string(s);
		cout<<str[str.size()-1]<<endl;
		
		}
	
	
	return 0;
	}