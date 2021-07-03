/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
double a[10000+4];
void Avrage(int n, double a[]){
    double Avg = 0.0;
    for(int i=0; i<n; i++)
        Avg += a[i];
    Avg /= n;
    cout << fixed << setprecision(6) << Avg << endl;
}

int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];

    Avrage(n, a);

    return (0);
}
