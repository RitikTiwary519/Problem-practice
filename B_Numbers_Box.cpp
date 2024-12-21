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
    int n,m;
    cin>>n>>m;
    int mini=INT_MAX;
    int ncount=0;
    int fl=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin>>x;
            if(x<0)
            {
                ncount++;
            }
            if(x==0)
            {
                fl=1;
            }
            mini=min(abs(x),mini);
            sum+=abs(x);
        }
        
    }

    if(fl)
    {
        cout<<sum<<endl;
    }
    else
    {
        if((ncount%2)==1)
        {
            cout<<sum-2*mini<<endl;
        }
        else
        {
            cout<<sum<<endl;
        }
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