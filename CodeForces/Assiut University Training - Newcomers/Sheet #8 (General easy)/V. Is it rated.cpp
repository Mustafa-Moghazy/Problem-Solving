/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}
int arr [1005][2];
int main(){ fast();
    int n; cin>>n;
    for(int i=0; i<n; ++i)
        for(int j=0; j<2; ++j)
            cin>>arr[i][j];
    // check is it rated
    for(int i=0; i<n; i++){
        if(arr[i][0] != arr[i][1]){
            cout<<"rated\n";
            return (0);
        }
    }
    // check not rated
    for(int i=1; i<n; ++i){
        if(arr[i][0] > arr[i-1][0]){
            cout<<"unrated\n";
            return (0);
        }
    }

    cout << "maybe\n";


    return (0);
}

