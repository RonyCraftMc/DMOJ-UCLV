#include <bits/stdc++.h>
#define endl1 '\n'
#define int long long
#define Rony_Js signed

using namespace std;

Rony_Js main(){

    int t;
    cin>>t;
    while(t--){
        int n, c = 0;
        bool legal = true;
        cin>>n;
            string str;
            cin>>str;
            for(int i = 0; i<n;i++){
                if(str[i]=='>')c++;
                else c--;

                if(c<0){
                     legal = false;
                }
            }
            if(c!=0 || !legal) cout<<"No Balanceada"<<endl1;
            else cout<<"Balanceada"<<endl1;
           


    }

    
    return 0;

}