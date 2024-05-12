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
    int a[1000000] = { 0 }; 

    for(int i = 2; i <= 1e6; i++){
        if(a[i] == 0){
            for(int j = 2; i*j <= 1e6; j++){
                a[i*j] = 1; 
            }
        }
    }

    int n; cin>>n; 
    ll sq;
    ll b; 
    for(int i = 0; i < n; i++){
        cin>>b; 
        sq = sqrt(b); 

        if(sq == 1) no; 
        else if(sq * sq == b and a[sq] == 0) yes; 
        else no;
    }


    return 0; 
}