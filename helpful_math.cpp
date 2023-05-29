#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>>s ;
    vector<char> v ;
    string ans = "" ;
    for (int i = 0 ; i < s.size() ; i++){
        if (s[i] != '+'){
            char ch = s[i] ;
            v.push_back(ch) ;
        }
    }
    sort(v.begin() , v.end()) ;
    for (int i = 0 ; i < v.size() ; i++){
        if (i == v.size() - 1){
            ans += v[i] ;
            break ;
        }
        else {
            ans += v[i] ;
            ans += '+' ;
        }
    }
    cout<<ans ;
    return 0 ;
}
