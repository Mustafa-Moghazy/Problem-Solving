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
    for(int i=0; i<n; i++)
        cin>>arr[i];
    bool isPalindrome = true;
    for(int i=0; i<(n/2); i++)
        if( arr[i] != arr[ n-1-i ])
            isPalindrome = false;
    if( isPalindrome )
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return (0);
}
