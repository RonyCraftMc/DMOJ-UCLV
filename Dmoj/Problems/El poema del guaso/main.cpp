#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    string a;
    getline(cin, a);
    while(t--){
        getline(cin, a);
        for(int i =0; i<a.size(); i++){
            if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
             {
                 cout<<'-';
             }
             else cout<<a[i];
        }
    
        cout<<endl;
    }
    
    return 0;
}