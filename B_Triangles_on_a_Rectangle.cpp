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


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll w,h;
        cin>>w>>h;
        ll hbase=0,wbase=0;
        ll mini=INT_MAX;
        ll maxi=INT_MIN;
        for(int i=0;i<2;i++)
        {
            int size;
            cin>>size;
        mini=INT_MAX;
        maxi=INT_MIN;

            for (int j = 0; j < size; j++)
            {
                ll x;
                cin>>x;
                if(x<w)
                mini=min(x,mini);
                maxi=max(x,maxi);
            }
            hbase=max(maxi-mini,hbase);
        }
        mini=INT_MAX;
        maxi=INT_MIN;
        for(int i=0;i<2;i++)
        {
            int size;
            cin>>size;
                    mini=INT_MAX;
        maxi=INT_MIN;

            for (int j = 0; j < size; j++)
            {
                ll x;
                cin>>x;
                if(x<h)
                mini=min(x,mini);
                maxi=max(x,maxi);
            }
            wbase=max(wbase,maxi-mini);
        }

        cout<<max(hbase*h,w*wbase)<<endl;

    }
}