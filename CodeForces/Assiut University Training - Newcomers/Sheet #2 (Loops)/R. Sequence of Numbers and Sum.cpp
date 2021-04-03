/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    while(cin>>n>>m){
        if( n <= 0 || m <= 0){
            return 0;
        }
        long long sum = 0;
        for(int i=min(n, m); i<=max(n, m); i++){
            cout<< i << " ";
            sum += i;
        }
        cout<< " sum =" << sum <<endl;
    }

    return (0);
}
