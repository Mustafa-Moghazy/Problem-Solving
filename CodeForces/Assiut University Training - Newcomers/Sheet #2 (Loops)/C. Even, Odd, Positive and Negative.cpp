/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, in, even = 0, ood = 0, positive = 0, negative = 0 ;
    cin>>n;
    for(int i =1 ; i<=n ;i++){
        cin>>in;
        if(in % 2 == 0)
            even += 1;
        else
            ood += 1;
        if( in > 0 )
            positive += 1;
        if( in < 0 )
            negative += 1;
    }
    cout<< "Even: " << even <<endl
        << "Odd: " << ood <<endl
        << "Positive: " << positive <<endl
        << "Negative: " << negative << endl;

    return (0);
}
