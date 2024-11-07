#include <bits/stdc++.h>
#define int long long
#define Rony_Js signed
#define endl '\n'

using namespace std;

vector<bool>cryba(110, true);

void Cryba(){

    for(int i = 2; i<=110; i++){
        for(int j = i+i; j<=110; j+=i)
            cryba[j]=false;
    }

}

Rony_Js main(){
    Cryba();
    long long d = 0 , n; cin>>n;
    long long c =0;
    for(int i = 1; i * i <=n; i++){
        for(int j = i; j *j<=n; j++){
            for(int k =j; i*k*j<= n; k++){
                if(k*j*i==n){
                    c++;
                   // cout<<k<<" "<<j<<" "<<i<<endl;
                }
            }
        }
    }
    
    if(cryba[n])cout<<1<<endl;
    else cout<<c<<endl;
    return 0;
}