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
#define pip pair<char,int> 

pair<int,int> solve()
{
    ll n;
    cin>>n;
    string str;
    cin>>str;

    priority_queue<pair<char,ll>> pq;
    pair<ll,ll> ans={-1,-1};
    pq.push({str[0],1});
    for(ll i=1;i<n;i++)
    {
        if(pq.top().first<=str[i])
        {
            pq.push({str[i],i+1});
        }
        else
        {
            ans.first=pq.top().second;
            ans.second=i+1;
            return ans;
        }
    }
    return ans;
}

int main()
{
    int t;
    t=1;
    while (t--)
    {
        pair<ll,ll> ans = solve();

        if(ans.first==-1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<ans.first<<" "<<ans.second<<endl;
        }
    }
    
}