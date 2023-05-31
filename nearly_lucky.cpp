#include<bits/stdc++.h>
using namespace std ;

bool isLucky(long long n){
    if (n == 0){
        return false ;
    }
    while(n > 0){
        if (n%10 != 4 && n%10 != 7){
            return false ;
        }
        n /= 10 ;
    }
    return true ;
}

int main(){
    long long n ;
    cin>>n ;
    int count = 0 ;
    while(n>0){
        if (n%10 == 4 || n%10 == 7){
            count++ ;
        }
        n /= 10 ;
    }
    if (isLucky(count)){
        cout<<"YES"<<endl ;
    }
    else {
        cout<<"NO"<<endl ;
    }
    return 0 ;
}
