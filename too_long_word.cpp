#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    while(n--){
        string str ;
        cin>>str ;
        if (str.size() > 10){
            string ans = "" ;
            ans = ans + str[0] ;
            ans = ans + to_string(str.size() - 2) ;
            ans = ans + str[str.size() - 1] ;
            cout<<ans<<endl ;
        }
        else {
            cout<<str<<endl ;
        }
    }
    return 0 ;
}
