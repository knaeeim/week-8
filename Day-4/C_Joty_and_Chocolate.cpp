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


ll gcm(ll a, ll b){
    return gcm(a, b);
}

ll lcm(ll a, ll b){
    // return ((a*b) / gcd(a, b));
    return ((a/gcd(a, b)) * b);
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    ll n, a, b, p, q, ans = 0, overlap;
    cin>>n>>a>>b>>p>>q; 

    ans +=((n/a) * p);
    ans +=((n/b) * q); 
    overlap = (n / lcm(a, b)); 
    ans -=(overlap * min(p, q));  
    
    cout<< ans << endl; 
    return 0; 
}