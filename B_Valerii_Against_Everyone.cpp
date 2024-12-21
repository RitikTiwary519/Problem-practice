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

    vector<ll> v(n);
    forn(i,0,n)
    {
        int x;
        cin>>x;
        v[i]=pow(2,x);
    }

    unordered_map<ll,vector<pair<int,int>>> mp;

    for(int i=0;i<n;i++)
    {
        ll sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=v[i];
            if(mp.find(sum)==mp.end())
            {
                vector<pair<int,int>> temp;
                temp.push_back({i,j});

                mp[sum]=temp;
                temp.clear();
            }
            else
            {
                for(auto it: mp[sum])
                {
                    if(it.second<i || it.first>j)
                    {
                        cout<<"YES"<<endl;
                        return;
                    }
                }
                vector<pair<int,int>> temp;
                temp.push_back({i,j});

                mp[sum]=temp;
                temp.clear();
            }
        }
    }

    cout<<"NO"<<endl;
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