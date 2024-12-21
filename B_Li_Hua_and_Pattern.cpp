#include <bits/stdc++.h>
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define input                  \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll x;                  \
        cin >> x;              \
        v.push_back(x);        \
    }
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define deb(v)            \
    for (auto &i : v)     \
    {                     \
        cout << i << ' '; \
    }
#define arrinput               \
    for (ll i = 0; i < n; i++) \
    {                          \
        cin >> arr[i];         \
    }
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>> v(n,vector<ll>(n));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
 
    ll temp=0;
 
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            if(v[i][j]!=v[n-i-1][n-j-1]) temp++;
        }
    }
 
    temp/=2;
 
    if(temp>k) cout<<"NO"<<endl;
    else if(temp==k) cout<<"YES"<<endl;
    else{
        if(n&1) cout<<"YES"<<endl;
        else if((k-temp)&1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
 
    return;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();




    }
    
}