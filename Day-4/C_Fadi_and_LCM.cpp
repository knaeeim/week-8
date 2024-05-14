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


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    ll x; cin>>x; 

    ll ans1 = 0, ans2 = 0;

    for(ll i = 1; i * i <=x; i++){
        if(x%i != 0){
            continue;
        }
        ll b1 = i, b2 = x/i;
        if(gcd(b1, b2) == 1){
            ans1 = b1; 
            ans2 = b2;
        }
    } 

    cout << ans1 << " " << ans2 << endl; 

    return 0; 
}