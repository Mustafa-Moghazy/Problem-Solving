/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;

void Equation(int x, int n){
    long long ans = 0;
    for(int i = 0; i <= n; i+=2)
        ans += pow(x, i);
    cout << ans - 1 << endl;
}

int main(){
    int x, n;
    cin >> x >> n;
    Equation(x, n);

    return (0);
}
