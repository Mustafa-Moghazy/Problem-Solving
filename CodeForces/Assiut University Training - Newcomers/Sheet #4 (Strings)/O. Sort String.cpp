/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;

int freq [30];

int main(){
    int n; cin>>n;
    char s;
    for(int i=0; i<n; i++){
        cin >> s;
        ++ freq[ s - 'a' ];
    }
    for(int i=0; i<30; i++){
        if(freq[i] > 0){
            for(int j = 0; j<freq[i]; j++)
                cout<< char( i + 'a');
        }
    }



    return (0);
}
