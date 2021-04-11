/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
int arr [100000+5];
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=0; i<n; i++)
            cin>>arr[i];

        for(int i=0; i<n; i++){
            for(int size = i+1; size<=n; size++ ){
                int max = arr[i];
                for(int groub = i; groub<size; groub++){
                    if(arr[groub] > max)
                        max = arr[groub];
                }
                cout<<max<<" ";
            }
        }
        cout<<endl;
    }

    return (0);
}
