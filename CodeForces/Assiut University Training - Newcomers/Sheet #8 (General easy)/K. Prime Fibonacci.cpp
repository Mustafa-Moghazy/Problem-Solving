/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}
long long a [100+4];
bool primeFib[100];
bool is_Prime ( long long n ){
    if(n == 1) return false;
     bool f = true;
     for(int i=2; i <= sqrt(n); i++){
        if(n%i==0){
            f = false;
        }
     }

     return (f) ;
}
void Make_Fib(){
    a[1] = 0, a[2] = 1;
    for(int i=3; i<= 50 ; i++){
        a[i] = a[i-1] + a[i-2];
        primeFib[i] = is_Prime(a[i]);
    }
}

int main(){ fast();
    Make_Fib();
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if( primeFib[n] )
            cout << "prime\n";
        else
            cout << "not prime\n";
    }

    return (0);
}

