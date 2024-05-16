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
    

    int n; 
    cin>>n; 

    map <int, int> mp;

    for(int i  = 2; i * i <= n; i++){
        if( n % i == 0){
            while(n % i == 0){
                mp[i]++;
                n /= i; 
            }
        }
    }

    if( n > 1) mp[n]++;

    for( auto [x,y] : mp){
        cout<< x << " " << y << endl; 
    }
    return 0; 
}