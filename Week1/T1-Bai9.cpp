#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    double p, s;
    cin >> a >> b >> c;
    if(a >= b+c || b >= a+c || c >= a+b){
        cout << "invalid";
    }
    else{
        p = (double)(a+b+c)/2.0;
        s = (double)sqrt(p*(p-a)*(p-b)*(p-c));

        cout << setprecision(2) << fixed << (double)s;

    }
    return 0;
}
