#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        long long n ;
        cin>>n ;
        long long sum = 0 ;
        sum = n*(n+1) / 2 ;
        sum -= 2 * n ;
        sum *= 2 ;
        sum += 5*n + 2 ;
        cout<<sum<<endl ;
    }
    return 0 ;
}
