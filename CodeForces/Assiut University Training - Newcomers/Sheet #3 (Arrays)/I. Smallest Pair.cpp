/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
int arr [100+5];
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        ll sum = INT_MAX;
        for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if( arr[i] + arr[j] + j - i < sum)
                sum = arr[i] + arr[j] + j - i;

       cout<<sum<<endl;

    }

    return (0);
}
