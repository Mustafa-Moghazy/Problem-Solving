/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a = 0, b = 1;
    if( n == 1 ) cout<< a;
    else if( n == 2 ) cout<< a << " " << b;
    else{
        cout << a << " " << b << " ";
        for(int i = 3 ; i<=n; i++){
            int temp = a+b;
            a = b;
            b = temp;
            cout<<temp<<" ";
        }
    }


    return (0);
}
