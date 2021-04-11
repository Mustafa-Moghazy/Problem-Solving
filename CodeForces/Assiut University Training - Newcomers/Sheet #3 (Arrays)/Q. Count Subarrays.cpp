/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
int arr [100000+5];
int main(){
    int t, n; cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int c = n;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[j]>=arr[j-1])
                    c++;
                else
                    break;
            }
        }
        cout<<c<<endl;
    }

    return (0);
}
