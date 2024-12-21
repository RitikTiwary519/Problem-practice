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

void print(list<char> &v)
{
    for(auto it: v)
    {
        cout<<it;
    }
    cout<<endl;
}

void solve()
{
    int n,r,b;
    cin>>n>>r>>b;
    list<char> s;

    for(int i=1;i<=n;i++)
    {
        if(floor(r/i)+1 == b)
        {
            //cout<<i<<" hello"<<endl;
            for(int k=1;k<=n-2*i;k++)
            {
                if(k%(i+1)==0 && b)
                {
                    s.push_back('B');
                    b--;
                }
                else
                {
                    s.push_back('R');
                }
            }
            for(int u=0;u<i;u++)
            {
                s.push_back('R');
            }
            for(int u=0;u<i;u++)
            {
                s.push_front('R');
            }
        break;
        }
    }
    print(s);
    return;
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