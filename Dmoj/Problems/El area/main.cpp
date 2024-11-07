#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    int x , b ,a;
    cin>>x>>b>>a;
    double d = 2*a;
double j = b/d;
//cout<<j<<" ";
   double  r = ((x+j)*(x+j))+4;
    //cout<<r<<endl;
    if (r >= 1 && r < 32) {
        cout << "Limpiador" << endl;
    } else if (r >= 32 && r < 45) {
        cout << "Cocinero" << endl;
    } else if (r >= 45 && r < 63) {
        cout << "Carnicero" << endl;
    } else if (r >= 63 && r < 71) {
        cout << "Arador" << endl;
    } else if (r >= 71 && r < 80) {
        cout << "Constructor" << endl;
    } else if (r >= 80 && r < 88) {
        cout << "Embolsador" << endl;
    } else if (r >= 88 && r < 102) {
        cout << "Corredor" << endl;
    } else if (r >= 102) {
        cout << "Docs" << endl;
    }

    return 0;
}