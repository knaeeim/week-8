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


int f (int u){
    for(int i = 2; i <=u; i++){
        if(u%i == 0) return i;
    }
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        int n; cin>>n; 
        vi v(n+1); 

        for(int i = 1; i <= n; i++) cin>>v[i]; 


        vector <int> ans[1007];
        vi res(1007);

        for(int i = 1 ; i <=1000; i++){
            ans[i].clear();
        }


        for(int i = 1; i <= n; i++){
            ans[f(v[i])].pub(i);
        }

        int ret = 0; 

        for(int i = 1; i <= 1000; i++ ){
            if(ans[i].size()){
                ret++;
                for(auto c: ans[i]){
                    res[c] = ret;
                }
            }
        }

        cout << ret << endl; 
        for(int i = 1; i <=n; i++){
            cout << res[i] << " ";
        }
        cout << endl; 
    }

    return 0; 
}