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
    int n, m;
    cin>>n>>m;
    vector<char> v;
    forn(i,0,n)
    {
        char x;
        cin>>x;
        v.push_back(x);
    }
    int white=0;
    for(int i=0;i<m;i++)
    {
        if(v[i]=='W')
        {
            white++;
        }
    }
    int ans=white;
    int i=0, j=m-1;

    while(j<n-1)
    {
        int temp = white-(v[i]=='W')+(v[j+1]=='W');
        white = temp;
        i++,j++;
        ans = min(ans,temp);
    }
    cout<<ans<<endl;
}

int main()
{
    ritik_tiwary
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}