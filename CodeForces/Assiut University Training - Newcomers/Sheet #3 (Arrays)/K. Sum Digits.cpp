/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
int arr [100000+5];
int main(){
    int n; cin>>n;
    string s; cin>>s;
    ll sum = 0;
    for(int i=0; i< s.size(); i++)
        sum += s[i] - '0';
    cout<<sum;

    return (0);
}
