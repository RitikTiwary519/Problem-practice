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


void solve() {
    ll base, start1, end1, start2, end2;
    cin >> base >> start1 >> end1 >> start2 >> end2;


    vector<ll> basePowers;
    ll currentPower = 1;
    while (currentPower <= end2) {
        basePowers.push_back(currentPower);
        if (currentPower > LLONG_MAX / base) break;
        currentPower *= base;
    }

    ll validCount = 0;


    for (ll power : basePowers) {
        ll minMultiplier = max(start1, (start2 + power - 1) / power); 
        ll maxMultiplier = min(end1, end2 / power);                 

        if (minMultiplier <= maxMultiplier) {
            validCount += (maxMultiplier - minMultiplier + 1); 
        }
    }

    cout << validCount << endl;
}

int main() {
    int testCases;
    cin >> testCases; 
    while (testCases--) {
        solve();
    }
    return 0;
}
