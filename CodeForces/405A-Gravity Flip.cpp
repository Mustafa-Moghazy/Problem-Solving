/// @author MUSTAFA MOGHAZY
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
///////////////////////////////////
 // 5 3 2 4 1 // n -> n-1 swap
//1-> 3 2 4 1 5 // n-2
//2-> 2 3 1 4 5 // n-3
//3-> 2 1 3 4 5 // n-4
//4-> 1 2 3 4 5 // n
///////////////////////////////////

void print( int n, int arr[50]){
    for(int i=0; i<n; ++i)
        cout << arr[i] << " ";
}

int arr[50];
int main(){
    int n; cin >> n;
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    for(int i=0; i<n-1; ++i){ // n*(n-1)/2 // n*n //
        for(int j=0; j<n-1-i; ++j){
            if( arr[j] > arr[j+1] )
                swap(arr[j], arr[j+1]);
        }
    }
    print(n, arr);


    return (0);
}
