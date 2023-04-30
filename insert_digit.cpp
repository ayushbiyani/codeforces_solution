#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n, d;
        cin >> n >> d;
        string str;
        cin >> str;
        string ans = "";
        string dd = to_string(d) ;
        if (d == 0){
            str += dd[0] ;
            cout<<str<<endl ;
            return ;
        }
        for (int i = 0 ; i < n ; i++){
            if (str[i] < dd[0]){
                str.insert(i , dd) ;
                cout<<str<<endl ;
                return ; 
            }
        }
        str += dd[0] ;
        cout<<str<<endl ;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {  
        solve() ;
    }
    return 0;
}
