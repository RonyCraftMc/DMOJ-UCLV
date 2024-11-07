#include <bits/stdc++.h>
#define endl '\n'
#define elif else if
using namespace std;

int main(){
    
    string a, b, c;
    int n, k, h; 
    cin>>n;
    cin>>k;
    cin>>a>>b;
    int t;
    int j = 0;
    cin>>t;
    if(t==0){
        reverse(a.begin(),a.end());
        cout<<a<<b<<endl;
    }
    elif(t==1){
        reverse(a.begin(),a.end());
        c = a+b;
        swap(c[n-1], c[n]);
        cout<<c<<endl;
    }
    elif(t==2){
        reverse(a.begin(),a.end());
        for(int i = 0; i<n; i++){
            c+=a[i];
            for(; j<k; ){
                c+=b[i];
                h=i;
                j++;
                break;
            }
        }
        if(n<k){
            for(int i = h; i<k; i++){
                c+=b[i];
            }
        }
        cout<<c<<endl;
    }
    elif(t==3){

        reverse(a.begin(), a.end());
        for(int i=0; i<k; i++){
            c+=b[i];
            for(;j<n;){
                c+=a[j];
                h=i;
                j++;
                break;
            }
        }
                if(k<n){
            for(int i = h; i<n; i++){
                c+=a[i];
            }
        cout<<c<<endl;
    }

}
 return 0;
}