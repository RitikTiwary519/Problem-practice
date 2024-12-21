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
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>> pq;


    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pq.push({(i + 1 + v[i]), i}); 
    }

    int sum = 0;

    while (m > 0 && !pq.empty())
    {
        auto top = pq.top();
        pq.pop();

        int value = top.first;       
        int index = top.second;    
 
        if (value <= m)
        {
            sum ++;        
            m -= (value); 
            //cout<<"cccccc"<<index<<endl;          
        }
    }

    cout <<sum<< endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
