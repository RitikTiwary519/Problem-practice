// #include <bits/stdc++.h>
// #define ll long long
// #define rsrt sort(v.rbegin(), v.rend());
// #define input                  \
//     for (ll i = 0; i < n; i++) \
//     {                          \
//         ll x;                  \
//         cin >> x;              \
//         v.push_back(x);        \
//     }
// #define mp make_pair
// #define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define srt sort(v.begin(), v.end());
// #define deb(v)            \
//     for (auto &i : v)     \
//     {                     \
//         cout << i << ' '; \
//     }
// #define arrinput               \
//     for (ll i = 0; i < n; i++) \
//     {                          \
//         cin >> arr[i];         \
//     }
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// using namespace std;
// #define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
// #define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)


// void ans()
// {
//     int n;
//     cin>>n;
//     vector<int> arr(n,0);
//     forn(i,0,n)
//     {
//         cin>>arr[i];
//     }

//     map<int,vector<int>> mp;

//     forn(i,0,n)
//     {
//         mp[arr[i]].push_back(i);
//     }

//     int p=0;
//     vector<int> ans(n);
//     for(auto i:mp)
//     {
//         if(i.second.size()==1)
//         {
//             cout<<-1<<endl;
//             return;
//         }
//         else
//         {
//            int temp = i.second.size();
//            int storage= i.second[0];
//            ans[i.second[temp-1]]=storage;
//            forn(j,0,temp-1)
//            {
//                ans[i.second[j]]=i.second[j+1];
//                p++;
//            }
//         }
//     }

//     forn(i,0,n)
//     {
//         cout<<ans[i]<<" ";
//     }
//     return;
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         ans();
//         cout<<endl;
//     }
    
// }

#include <bits/stdc++.h>
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    forn(i, 0, n) {
        cin >> arr[i];
    }

    // Map to group indices of identical elements
    map<int, vector<int>> mp;

    // Populate the map with indices
    forn(i, 0, n) {
        mp[arr[i]].push_back(i);
    }

    vector<int> result(n, -1);

    // Rearrange indices
    for (auto &entry : mp) {
        auto &indices = entry.second;
        int size = indices.size();

        // If there's only one occurrence, it's invalid
        if (size == 1) {
            cout << -1 << endl;
            return;
        }

        // Rearrange indices circularly
        forn(i, 0, size) {
            result[indices[i]] = indices[(i + 1) % size];
        }
    }

    // Output the rearranged indices
    forn(i, 0, n) {
        cout << result[i] + 1 << " "; // Convert to 1-based index
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
