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


// void solve()
// {
//     long long a,b;
//     cin>>a>>b;

//     long long maxup=((a-1)%4);

//     if(maxup==b)
//     {
//         cout<<a<<endl;
//     }
//     else
//     {
//         if((maxup^a)==b)
//         {
//             cout<<a+2<<endl;
//         }
//         else
//         {
//             cout<<a+1<<endl;
//         }

//     }

// }

// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         solve();
//     }
    
// }
#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;

    // XOR value of numbers from 0 to (a-1) based on the repeating pattern (0, 1, 3, 0)
    long long maxup = 0;
    if ((a - 1) % 4 == 1) {
        maxup = 1;
    } else if ((a - 1) % 4 == 2) {
        maxup = a - 1;
    } else if ((a - 1) % 4 == 3) {
        maxup = 0;
    }

    if (maxup == b) {
        cout << a << endl;
    } else if ((maxup ^ b) == a) {
        cout << a + 2 << endl;
    } else {
        cout << a + 1 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
