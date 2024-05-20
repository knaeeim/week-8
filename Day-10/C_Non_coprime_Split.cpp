#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long int
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";

ll getPrime(ll n){
    while(n % 2 == 0){
        return 2;
    }

    for(ll i = 3; i * i <= n; i++){
        while(n % i == 0){
            return i;
        }
    }

    if(n > 2) return n; 
}


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        ll l, r; 
        cin>>l>>r;

        if(r <= 3) cout << -1 << endl; 
        else{
            if(l < r){
                
                if(r % 2 != 0){
                    r--; 
                }

                cout << 2 << " " << r -2 << endl; 

            }
            else{ //l == r
                ll prime = getPrime(l); 

                if(prime == l){
                    cout << -1 << endl;
                }
                else{
                    cout << prime << " " << l - prime << endl; 
                }
            }
        }
    }

    return 0; 
}