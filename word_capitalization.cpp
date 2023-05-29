#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>>s ;
    vector<char> v ;
    for (int i = 0 ; i < s.size() ; i++){
        char ch = s[i] ;
        v.push_back(ch) ;
    }
    char cap = toupper(v[0]) ;
    string ans = "" ;
    ans += cap ;
    for (int i = 1 ; i < v.size() ; i++){
        ans += v[i] ;
    }
    cout<<ans ;
    return 0 ;
}
