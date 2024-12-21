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
    ll n,k;
    cin>>n>>k;
    vector<ll> v1(n),v2(n),v3(n);

    for(ll i=0;i<3;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(i==0)
            {
                cin>>v1[j];
            }
            else if(i==1)
            {
                cin>>v2[j];
            }
            else
            {
                cin>>v3[j];
            }
        }
    }

    ll curr=0;
    ll i=0,j=0,m=0;
    while (curr!=k)
    {
        if(((k)|(k-v1[i]))==k)
        {
            curr|=v1[i];
            i++;
            
        }
        else if( ((k)|(k-v2[j]))==k)
        {
            curr|=v2[j];
            j++;
        }
        else if(((k)|(k-v3[m]))==k)
        {
            curr|=v3[m];
            m++;
        }
        else
        {
            break;
        }
    }
    if(curr==k)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
    
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