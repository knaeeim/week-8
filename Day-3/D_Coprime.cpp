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

        vi v(1005, -1); 

        for(int i = 0; i < n; i++){
            int x; cin>>x; 
            if(v[x] < i + 1) v[x] = i + 1;
        }

        int ans = -1;

        for(int i = 0; i <= 1000; i++){
            for(int j = i; j <= 1000; j++){
                if(v[i] > 0 and v[j] > 0){
                    if(gcd(i, j) == 1){
                        ans = max(ans, v[i] + v[j]);
                    }
                }
            }
        }

        cout<< ans << endl; 
    }
    return 0; 
}