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
    

    int t; cin>>t; 

    while(t--){
        int n; 
        cin>>n; 

        vll v(n); 

        for(int i =0; i < n; i++) cin>>v[i]; 

        ll gcd1 = 0, gcd2 = 0;

        for(int i = 0; i < n; i++){
            if(i%2 == 0) gcd1 = gcd(gcd1, v[i]);
            else gcd2 = gcd(gcd2, v[i]); 
        }

        bool first = true, second = true;

        for(int i  = 0; i < n; i+=2){
            if(v[i] % gcd2 == 0){
                second = false;
                break;
            }
        }

        for(int i = 1; i < n; i+=2 ){
            if(v[i] % gcd1 == 0){
                first = false;
                break;
            }
        }

        if(!first and !second) cout << 0 << endl; 
        else if(first) cout << gcd1 << endl;
        else cout << gcd2 << endl; 
    }
    return 0; 
}