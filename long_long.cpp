#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int n ;
    cin>>n ;
    vector<int> v(n) ;
    for (int i = 0 ; i < n ; i++){
        cin>>v[i] ;
    }
    vector<int> vect ;
    for (int i = 0 ; i < n ; i++){
        if (v[i] != 0){
            vect.push_back(v[i]) ;
        }
    }
    long long sum = 0 ;
    int count = 0 ;
    bool open = false ;
    for (int i = 0 ; i < vect.size() ; i++){
        sum += abs(vect[i]) ;
        if (vect[i] < 0 && !open){
            count++ ;
            open = true ;
        }
        if (vect[i] > 0){
            open = false ;
        }
    }
    cout<<sum<<" "<<count<<endl ;
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
