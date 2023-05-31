#include<bits/stdc++.h>
using namespace std ;

int main(){
    int k , n , w ;
    cin>>k>>n>>w ;
    int total = 0 ;
    while(w > 0){
        total += k*w ;
        w-- ;
    }
    if (n >= total){
        cout<<"0"<<endl ;
    }
    else {
        cout<<total-n<<endl ;
    }
    return 0 ;
}
