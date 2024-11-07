#include <bits/stdc++.h>
#define endl '\n'
#define int long long 
#define Rony_Js signed

using namespace std;

Rony_Js main(){

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    vector<int>c;
    c = a;
    int rodrigo = 0;
    for(int i = 1 ; i<n; i++){
        
         
            if(a[i-1]!=c[i])rodrigo++;
        
    }
    cout<<rodrigo<<endl;
    return 0;
}