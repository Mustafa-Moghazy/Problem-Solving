/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
int arr [100000+5];
int main(){
    int n, c = 0; cin>>n;
    bool f = true;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] % 2 == 1){
            f = false;
            break;
        }
    }
    while(f){
        for(int i=0; i<n; i++){
            arr[i] /= 2;
            if(arr[i] % 2 == 1){
                f = false;
                break;
            }
        }
        c++;
    }
    cout<<c;

    return (0);
}
