#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int a , b , c ;
    cin>>a>>b>>c ;
    if (a + b - c == 0){
        cout<<"+"<<endl ;
        return ;
    }
    else {
        cout<<"-"<<endl ;
        return ;
    }
}

int main(){
    int t ;
    cin>>t ;
    while(t--){
        solve() ;
    }
    return 0 ;
}
