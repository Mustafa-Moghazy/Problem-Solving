/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, n;
    cin>>n>>a>>b;
    int sumNumbers = 0;
    for(int i=1; i<=n; ++i){
        int sumDigits = 0;
        int temp = i;
        while(temp > 0){
            sumDigits += temp%10;
            temp /= 10;
        }
        if( sumDigits >= a && sumDigits <= b)
            sumNumbers += i;
    }
    cout<< sumNumbers << endl;

    return (0);
}
