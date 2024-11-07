#include <bits/stdc++.h>
#define endl '\n'
#define int long long 
#define Rony_Js signed

using namespace std;

Rony_Js main(){

int a, b, c;
cin>>a>>b>>c;
for(int i = 999; i>100; i--){
    if(i%b==0){
        b=i;
        break;
        }
}
for(int i = 1000; i<9999; i++){
    if(i%c==0){
        c=i;
        break;
        }
}

    cout<<a+b+c<<endl;

    return 0;
}