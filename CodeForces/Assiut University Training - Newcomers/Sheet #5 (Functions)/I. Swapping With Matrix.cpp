/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
const int S = 505;
int a[505][505];
void Swap(int n, int x, int y, int a[S][S]){
    for(int i=0; i<n; i++)
        swap(a[x][i], a[y][i]);
    for(int i=0; i<n; i++)
        swap(a[i][x], a[i][y]);
}

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> a[i][j];
    Swap(n, x-1, y-1, a);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return (0);
}
