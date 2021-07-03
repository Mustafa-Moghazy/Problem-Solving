/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
void Solution(int n, char a){
    for(int i=1; i<=n; i++)
        (i!= n)? cout << a << " " : cout << a;
    cout << '\n';
}
int main(){
    int t, n;
    char a;
    cin >> t;
    while(t--){
        cin >> n >> a;
        Solution(n, a);
    }

    return (0);
}
