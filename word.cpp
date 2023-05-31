#include<bits/stdc++.h>
using namespace std ;

int main(){
    string str ;
    cin>>str ;
    int upper = 0;
    int lower = 0 ;
    for (int i = 0 ; i < str.size() ; i++){
        int temp = int(str[i]) ;
        if (temp >= 65 && temp <= 90){
            upper++ ;
        }
        else {
            lower++ ;
        }
    }
    if (upper > lower){
        transform(str.begin() , str.end() , str.begin() , ::toupper) ;
        cout<<str<<endl ;
    }
    else {
        transform(str.begin() , str.end() , str.begin() , ::tolower) ;
        cout<<str<<endl ;
    }
    return 0 ;
}
