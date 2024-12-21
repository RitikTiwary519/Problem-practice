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

// void solve(int n)
// {
//     if(n == 1)
//     {
//         cout << "? 0" << endl;
//         fflush(stdout);
//         int x;
//         cin >> x;
//         if(x == 1)
//         {
//             cout << "? 0" << endl;
//         }
//         else
//         {
//             cout << "? 1" << endl;
//         }
//         return;
//     }

//     string ans = "";
//     cout << "? 0" << endl;
//     fflush(stdout);
//     int x;
//     cin >> x;
//     ans += (x == 0) ? "1" : "0";
//     int backAddition = 0;

//     while(ans.size() != n)
//     {
//         if(backAddition == 0)
//         {
//             cout << "? " << ans + "0" << endl;
//             fflush(stdout);
//             cin >> x;
//             if(x == 1)
//             {
//                 ans = ans + "0";
//                 continue;
//             }
//             cout << "? " << ans + "1" << endl;
//             fflush(stdout);
//             cin >> x;
//             if(x==1)
//             {
//                 ans = ans + "1";
//                 continue;
//             }
//             else
//             {
//                 backAddition=1;
//             }
//         }
//         else
//         {
//             cout << "? " << "0" + ans << endl;
//             fflush(stdout);
//             cin >> x;
//             if(x == 1)
//             {
//                 ans = "0" + ans;
//             }
//             else
//             {
//                 ans = "1" + ans;
//             }
//         }
//     }

//     cout << "? " << ans << endl;
//     fflush(stdout); // It's good practice to flush before final output
// }

void solve(int n)
{
    if (n == 1)
    {
        cout << "? 0" << endl;
        fflush(stdout);
        int x;
        cin >> x;
        cout << "? " << (x == 1 ? "0" : "1") << endl;
        return;
    }

    string ans = "";
    cout << "? 0" << endl;
    fflush(stdout);
    int x;
    cin >> x;
    ans += (x == 0 ? "1" : "0");

    int backAddition = 0;

    while (ans.size() < n)
    {
        if (backAddition == 0)
        {
            cout << "? " << ans + "0" << endl;
            fflush(stdout);
            cin >> x;
            if (x == 1)
            {
                ans += "0";
            }
            else
            {
                cout << "? " << ans + "1" << endl;
                fflush(stdout);
                cin >> x;
                if (x == 1)
                {
                    ans += "1";
                }
                else
                {
                    backAddition = 1;
                }
            }
        }
        else
        {
            cout << "? " << "0" + ans << endl;
            fflush(stdout);
            cin >> x;
            if (x == 1)
            {
                ans = "0" + ans;
            }
            else
            {
                ans = "1" + ans;
            }
        }
    }

    cout << "? " << ans << endl;
    fflush(stdout);
}


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        solve(n);
    }
    
}