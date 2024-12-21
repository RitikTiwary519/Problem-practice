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
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    int d=0;
    while(a[d]==b[d])
    {
        d++;
    }
    int first=d;
    while(first>=0 && b[first-1]<=b[first])
    {
        first--;
    }
    if(first<0)
    {
        first++;
    }

    int second=d;
    while(second<n && b[second]<=b[second+1])
    {
        second++;
    }
    if(second==n)
    {
        second--;
    }
    cout<<first+1<<" "<<second+1<<endl;
    
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