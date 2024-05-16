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
    
    // sieve of erathosness
    int n = 100; 
    vector <bool> prime(n+1, true);

    for(int i = 2; i <= n; i++){
        if(prime[i]){
            for(int j = i + i; j <= n; j+=i){
                prime[j] = false;
            }
        }
    } 

    vector <int> all_primes; 

    for(int i = 2; i <=n; i++){
        if(prime[i]){
            all_primes.pub(i);
        }
    }

    range(all_primes); 
    cout<<endl; 


    //prime factorizations 

    map <int, int> mp;
    int x, idx = 0; 
    cin>>x; 

    while( x > 1){
        if(x % all_primes[idx] == 0){
            mp[all_primes[idx]]++;
            x /= all_primes[idx];
        }
        else idx++;
    }

    for(auto [x,y] : mp){
        cout<< x << " " << y << endl; 
    }

    return 0; 
}