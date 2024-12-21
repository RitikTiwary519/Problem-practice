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
    string str;
    cin>>str;
    ll n =str.size();
    ll longest=0;
    ll maxi=0;
    if(n==1)
    {
        cout<<str[0]<<endl;
        return;
    }
    ll anothercheck=0;
    for(ll i=0;i<n;i++)
    {
        if(str[i]=='1')
        {
            anothercheck++;
        }
    }
    if(anothercheck==n)
    {
        ll finalanswer=n*n;
        cout<<finalanswer<<endl;
        return;
    }
    for(ll i=0;i<2*n;i++)
    {
        if(str[i%n]=='1')
        {
            longest++;
            maxi=max(maxi,longest);
        }
        else
        {
            longest=0;
        }
    }
    cout<<(maxi+1)*(maxi+1)/4<<endl;
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