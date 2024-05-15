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
    

    int n; cin>>n; 

    if(isPrime(n)) cout<< 1 << endl; 
    else if(n % 2 == 0){
        cout << 2 << endl; 
    }
    else{
        if(isPrime(n-2)){
            cout<< 2 << endl;
        }
        else cout << 3 << endl; 
    }
    return 0; 
}