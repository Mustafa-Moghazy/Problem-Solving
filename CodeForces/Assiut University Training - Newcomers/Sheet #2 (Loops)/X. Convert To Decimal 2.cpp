/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int sum1 = 0;
        while(n > 0){
            sum1 += n%2;
            n /= 2;
        }
        int ans = 0;
        int i = 0;
        while( sum1 > 0 ){
            ans += pow(2, i);
            sum1--;
            i++;
        }
        cout << ans <<endl;

    }

    return (0);
}
