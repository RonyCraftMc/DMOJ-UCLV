#include <bits/stdc++.h>
#define endl '\n'
#define int long long 
#define Rony_Js signed 

using namespace std; 

Rony_Js main(){


    int n;
    cin>>n;
    if(n==1){
        int n, m;
        cin>>n>>m;
        string a;
        cin>>a;
        int xma = -1*1e9, xmi= 1e9, ymi = 1e9 ,yma = -1*1e9, x , y;
        char l[n+1][m+1];
        for(int i = 1; i<=n ; i++){
            for(int j = 1; j<=m; j++){
                char k;
                cin>>k;
                l[i][j] = k;
                if(k!='#' && k!='_'){
                    
                    x = i; y = j;
                    xma=max(xma, x); xmi =min(xmi, x);
                    yma = max(yma, y); ymi = min(ymi , y);
              //      cout<<xma<<" "<<xmi<<endl;
                   // cout<<yma<<" "<<ymi<<endl;
                }

            }
        }

    cout<<((xma-xmi)+1)*((yma-ymi)+1);
    }

    return 0;
}