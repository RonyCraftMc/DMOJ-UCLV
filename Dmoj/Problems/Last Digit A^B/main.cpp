
#include <bits/stdc++.h>
#define endl1 '\n'
#define int long long
#define Rony_Js signed

using namespace std;



int binpow ( int a , int b ) {
int res = 1 ;
while (b) {
if (b%2!=0){
res*= a;
res%=10;
} 
a*=a;
b>>=1;
}
return res ;
}

Rony_Js main(){

int a,b;    

    
    return 0;

}