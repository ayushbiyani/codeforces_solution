#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int n ;
    cin>>n ;
    long long arr[n] ;
    for (int i = 0 ; i < n ; i++){
        cin>>arr[i] ;
    }
    sort(arr , arr+n) ;
    long long ans ;
    long long a = arr[n-1] * arr[n-2] ;
    long long b = arr[0] * arr[1] ;
    ans = max(a , b) ;
    cout<<ans<<endl ;
    return ;
}

int main(){
    int t ;
    cin>>t ;
    while(t--){
        solve() ;
    }
    return 0 ;
}
