/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //

int a [100+5][100+5];

int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];
    int x; cin>>x;
    bool f = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == x){
                f = false;
                break;
            }
        }
    }

    if(f)
        cout<<"will take number";
    else
        cout<<"will not take number";

    return (0);
}
