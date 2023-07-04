#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int n , m ;
    cin>>n>>m ;
    vector<int>tsondo(n) ;
    vector<int>tenzing(m) ;
    long long sum1 = 0 ;
    long long sum2 = 0 ;
    for (int i = 0 ; i < n ; i++){
        cin>>tsondo[i] ;
        sum1 += tsondo[i] ;
    }
    for (int i = 0 ; i < m ; i++){
        cin>>tenzing[i] ;
        sum2 += tenzing[i] ;
    }
    if (sum1 > sum2){
        cout<<"Tsondu"<<endl ;
    }else if (sum1 < sum2){
        cout<<"Tenzing"<<endl ;
    }else {
        cout<<"Draw"<<endl ;
    }
    return ;
}

int main(){
    int t ;
    cin>>t ;
    while(t--){
        solve() ;
    }
}