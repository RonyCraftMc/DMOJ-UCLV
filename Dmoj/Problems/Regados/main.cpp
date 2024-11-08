#include <bits/stdc++.h>
#define endl '\n'
#define elif else if
#define Rony_Js signed 

using namespace std;

Rony_Js main(){
    
    int n;
    cin>>n;
    int p1 = 0;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
        p1+=a[i];
    }
    sort(a.rbegin(), a.rend());
    int prom = p1/n;
    int s = 0;
    for(int i = 0; i<n; i++){

        if(a[i]>prom){
            s+=a[i]-prom;
        }else break;
        
    }
    cout<<s<<endl;
 return 0;
}