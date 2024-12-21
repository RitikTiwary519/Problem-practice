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


void solve()
{
    ll n;
    cin>>n;
    vector<int> v(n);

    forn(i,0,n)
    {
        cin>>v[i];
    }

    if(n==2)
    {
        cout<<v[1]-v[0]<<endl;
        return;
    }
    if(n==1)
    {
        cout<<v[0]<<endl;
        return;
    }
    ll sum=0;
    for(ll i=0;i<n-3;i++)
    {
        sum+=v[i];
    }
    ll val=v[n-2]-v[n-3];
    cout<<v[n-1]-(val-sum)<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}