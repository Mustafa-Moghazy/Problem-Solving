/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
int arr [105][105];
int main(){
    int n, m; cin>>n>>m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>arr[i][j];

    for(int i=0; i<n; i++){
        for(int j=m-1; j>=0; j--)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    return (0);
}
