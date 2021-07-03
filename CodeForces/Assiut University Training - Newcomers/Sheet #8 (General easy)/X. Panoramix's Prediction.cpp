/// @author MUSTAFA MOGHAZY ^_^ ^_^
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios_base::sync_with_stdio(0);
cin.tie(nullptr); cout.tie(nullptr);
}

int arr [20] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
int main(){ fast();
    int n, m;
    cin >> n >> m;
    for(int i=0; i<15; i++)
        if( arr[i] == n && arr[i+1] == m ){
            cout << "YES" << endl;
            return 0;
        }

    cout << "NO" << endl;

    return (0);
}

