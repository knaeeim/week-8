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
        int n, c, d; 
        cin>>n>>c>>d; 

        vi v(n*n);
        int mn = INT_MAX;
      
        for(int i = 0; i < n * n; i++){
            cin>>v[i];
            mn = min(mn, v[i]);
        }

        vi ans;
        int cnt = mn, lastCol = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                ans.pub(cnt); 
                cnt +=d;
            }
            lastCol += c; 
            cnt = mn; cnt +=lastCol;
        }

        sorta(v);
        sorta(ans);

        if(ans == v) yes;
        else no;
    }
    return 0; 
}