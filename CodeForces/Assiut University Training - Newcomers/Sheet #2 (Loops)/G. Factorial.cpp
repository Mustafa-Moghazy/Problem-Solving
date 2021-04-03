/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, in;
    cin >> t;
    while(t--){
        cin>>in;
        long long fact = 1;
        for(int i = 2; i<=in; i++)
            fact *= i;
        cout<<fact<<endl;
    }

    return (0);
}
