/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int a [100000+5];

int main(){ fast();
    int n, c = 1;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=1; i<n; i++)
        if( a[i] != a[i-1] )
            c++;

    cout << c << endl;


    return (0);
}
