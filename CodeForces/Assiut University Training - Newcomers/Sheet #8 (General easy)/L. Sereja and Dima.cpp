/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int a [1004];

int main(){ fast();
    int n, sum_s = 0, sum_d = 0;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];

    int st = 0, en = n - 1;
    bool turn = true;
    for(int i=0; i<n; i++){
        if( turn ){
            if ( a[st] > a[en] ){
                sum_s += a[st];
                st++;
            }
            else{
                sum_s += a[en];
                en--;
            }

            turn = !turn;
        }
        else{
            if( a[st] > a[en] ){
                sum_d += a[st];
                st++;
            }
            else{
                sum_d += a[en];
                en--;
            }

            turn = !turn;
        }
    }

    cout << sum_s << " " << sum_d << endl;


    return (0);
}
