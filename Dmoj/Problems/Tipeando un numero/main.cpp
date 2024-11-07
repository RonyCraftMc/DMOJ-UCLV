#include <bits/stdc++.h>
#define endl '\n'
#define int long long 
#define Rony_Js signed

using namespace std;

Rony_Js main(){

    string a;
    cin>>a;
    if(a[0]==a[1]&&a[1]==a[2])cout<<"Equilibrado"<<endl;
    else if(a[0]<a[1]&&a[1]<a[2])cout<<"Ascendente"<<endl;
    else if(a[0]>a[1]&&a[1]>a[2])cout<<"Descendente"<<endl;
    else cout<<"Alterno"<<endl;

    return 0;
}