/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define OO INT_MAX
#define endl '\n'
void Fast_Code(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);
}
int a[1000+5];
int main() { Fast_Code();
    int n = 6, sum = 0, t=0;
    for(int i=0; i<n; ++i){
        cin >> a[i];
        sum += a[i];
    }
    for(int i=0; i<n; ++i)
        for(int j=i+1; j<n; ++j)
            for(int k=j+1; k<n; ++k){
                t = a[i]+a[j]+a[k];
                if( t == sum-t ){
                    cout << "YES" << endl;
                    return 0;
                }
            }
    cout << "NO" << endl;
    return (0);
}
