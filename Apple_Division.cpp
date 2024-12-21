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

ll fun(ll ind,vector<ll> &v,ll suma,ll sumb)
{
    if(ind>=v.size())
    {
        return abs(suma-sumb);
    }

    return min(fun(ind+1,v,suma+v[ind],sumb),fun(ind+1,v,suma,sumb+v[ind]));

}

int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    forn(i,0,n) cin>>v[i];
    cout<<fun(0,v,0,0);
}