/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int years = n / 365;
    int months = (n%365) / 30;
    int days = (n%365) % 30 ;

    cout<< years << " years\n"
        << months << " months\n"
        << days << " days";

    return (0);
}


