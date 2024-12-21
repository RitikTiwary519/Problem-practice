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
    ll n,k,x;
    cin>>n>>k>>x;

    vector<ll> v(n);
    forn(i,0,n)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    vector<ll> diff;
    for(ll i=0;i<n-1;i++)
    {
        if((v[i+1]-v[i])>x)
        {
            diff.push_back(abs(v[i+1]-v[i]));
        }
    }

    sort(diff.begin(),diff.end());

    ll ans=0;

    ll i=0;

 

    for(auto it: diff)
    {
        int req = ((it+x-1)/x)-1;

        if(k>=req)
        {
            i++;
            k-=req;
        } 
        else
        {
            break;
        }
    }

    ll diff_size = diff.size();

    ll rem = diff_size-i;
    cout<<rem+1<<endl;

}

int main()
{
    solve();
}