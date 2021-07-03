/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int a [100005];

int main(){ fast();
    int n, r = 0, un = 0;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n; i++){
        if(a[i] == -1 && r == 0 )
            un++;
        else if(a[i] == -1 && r > 0)
            r--;
        else if(a[i] > 0)
            r += a[i];
    }
    cout << un << endl;

    return (0);
}
