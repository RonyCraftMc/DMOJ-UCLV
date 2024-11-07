#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define Rony_Js signed

using namespace std;


Rony_Js main(){
    int v, n;
    cin>>v>>n;
    vector< pair<int , int> >sol(n+1);
    for(int i = 1; i<=n; i++){
        int s = 0;
        for(int j = 1; j<=i; j++){
            int a;
            cin>>a;
            s+=a;
        }
        sol[i].first = s;
        sol[i].second = i;
        sol[i].second*=-1;
    }
    sort(sol.rbegin(), sol.rend());
    cout<<(sol[0].second*-1)<<endl;
    return 0;

}