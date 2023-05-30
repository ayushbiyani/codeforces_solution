#include<bits/stdc++.h>
using namespace std ;

int main(){
    string str ;
    cin>>str ;
    unordered_set<int> s ;
    for (int i = 0 ; i < str.size() ; i++){
        s.insert(str[i]) ;
    }
    if (s.size() % 2 == 0){
        cout<<"CHAT WITH HER!" ;
    }
    else {
        cout<<"IGNORE HIM!" ;
    }
    return 0 ;
}
