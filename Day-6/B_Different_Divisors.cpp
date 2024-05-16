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

bool isPrime(int n){
    if(n == 1) return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int t; cin>>t; 
    
    while(t--){
        int n; cin>>n; 

        int ans1, ans2; 

        int primeSearch = 1+n;

        while(1){
            if(isPrime(primeSearch)){
                ans1 = primeSearch;
                break;
            }
            primeSearch++;
        }

        primeSearch += n;

        while(1){
            if(isPrime(primeSearch)){
                ans2 = primeSearch;
                break;
            }
            primeSearch++;
        }

        cout << ans1 * ans2 << endl;

    }
    
    return 0; 
}