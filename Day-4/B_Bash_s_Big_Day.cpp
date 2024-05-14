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
    

    int n; cin>>n; 

    vi v(n); 
    map<int, int> mp1;
    for(int i = 0; i < n; i++){
        cin>>v[i];
        mp1[v[i]]++;
    }
    
    map<int, int> mp; 

    for(int i = 0; i < n; i++){
        for(int j = 2; j * j <= v[i]; j++){
            if(v[i] % j == 0){
                mp[j]++;
                while(v[i] % j == 0){
                    v[i] /= j; 
                }
            }
        }
        if(v[i] > 1) mp[v[i]]++;
    }

    int mx = INT_MIN; 

    for(auto [x, y] : mp){
        mx = max(mx, y);
    }


    if(mp1.size() == 1 and mp1[1] == n) cout<< 1 << endl; 
    else cout<< mx << endl; 

    return 0; 
}