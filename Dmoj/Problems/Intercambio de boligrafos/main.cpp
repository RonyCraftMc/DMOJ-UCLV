#include <bits/stdc++.h>
#define int long long
#define Rony_Js signed
#define endl '\n'

using namespace std;


Rony_Js main(){
    
    int t;
    cin>>t;
    while(t--){
    int k,a,b;
    cin>>k>>a>>b;
    if(abs(b-a)<=k)cout<<1<<endl;
    else{
        int B = max(a,b);
        int A = min(a,b);
    cout<<B-(A+k)<<endl;
    } 
    }
    return 0;
}