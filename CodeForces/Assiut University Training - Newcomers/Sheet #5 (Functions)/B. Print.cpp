/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
void Print (int n){
    for(int i = 1; i <= n; ++i )
        (i != n)? cout << i << " " : cout << i << endl;
}

int main(){
    int n; cin >> n;
    Print(n);

    return (0);
}
