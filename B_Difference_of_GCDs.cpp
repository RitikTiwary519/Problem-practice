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
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> v;
    ll curr=l;
    v.push_back(curr);
    ll i=1;
    while(i<n)
    {
        ll rem = curr%(i+1);
        ll next = curr;
        if(rem==0)
        {
            next= curr;
        }
        else
        {

            next = curr+(i+1-rem);
        }    
        if(next>r)
        {
            break;
        }
        v.push_back(next);
        curr=next;
        i++;
    }


    if(v.size()!=n)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        yes
        for(ll i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    
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