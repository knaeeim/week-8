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
#define Rocket ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Get Divisors of a Number (get all divisor's sum if you want)
vll divisors(ll digit){ vll factors;
    for (ll i = 1; i * i <= digit; i++){
        if(digit % i == 0){
            factors.pub(i); 
            if((digit / i) != i) factors.pub(digit / i);
        }
    }
    return factors;
}

const int mx = 1e7+123;
bitset<mx> isPrime;
vector<int>primes;

// Sieve
void PrimeGen(int n){
    // Making all the odd numbers prime [Except 2, all the primes are odd]
    for(int i = 3; i <= n; i+=2) isPrime[i] = 1;

    // Filtering composite by Harmony Series
    int sq = sqrt(n);
    for (int i = 3; i <= sq; i+=2){
        if(isPrime[i] == 1){
            for (int j = i*i; j <= n; j+=i){
                isPrime[j] = 0;
            }
        }
    }
    // Pushing Primes
    primes.push_back(2);
    for (int i = 3; i <= n; i+=2){
        if(isPrime[i] == 1) primes.push_back(i); 
    }
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int t; cin>>t; 

    while(t--){
        int a, b, l, comp, count = 0; 
        cin>>a>>b>>l; 

        vll k = divisors(l); 

        vll x, y; 

        for(int i = 0; i <= 20; i++ ){
            comp = pow(a, i); 
            if(comp <= 1e6){
                x.pub(comp);
            }
            else break;
        }

        for(int i = 0; i <= 20; i++){
            comp = pow(b,i);
            if(comp <= 1e6){
                y.pub(comp);
            }
            else break;
        }

        for(ll i = 0; i < (ll)k.size(); i++){
            int f = 0; 
            for(ll j = 0; (ll) j < x.size(); j++){
                for(ll m = 0; (ll) m < y.size(); m++){
                    if(k[i] * x[j] * y[m] == l){
                        count++;
                        f = 1; 
                        break;
                    }
                }
                if(f == 1){
                    break;
                }
            }
        }

        cout << count << endl; 

    }
    
    return 0; 
}