/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// Declare an array outside main, //
// Make All array elements Have  //
// initial Value Zero           //
int arr [100000+5];
int main(){
    int a, b;
    string s;
    cin>>a>>b>>s;
    bool f = true;
    for(int i=0; i<s.size(); i++){
        if( i == a){
            if(s[i] != '-'){
                cout<<"No";
                f = false;
                break;
            }
        }
        else{
            if(! isdigit(s[i]) ){
                cout<<"No";
                f = false;
                break;
            }
        }
    }
    if( f )
        cout<<"Yes";

    return (0);
}
