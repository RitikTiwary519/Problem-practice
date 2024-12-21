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
//     string str;
//     cin>>str;
//     int n =str.size();

//     set<char> st;

//     for (int i = 0; i < str.size(); i++)
//     {
//         st.insert(str[i]);
//     }
//     int uniq= st.size();
    
//     map<char,int> freq;

//     int i=0;
//     int j=0;

//     while(j<uniq)
//     {
//         freq[str[j]]++;
//         if(freq[str[j]]>1) 
//         {
//             no
//             return;
//         }
//         j++;
//     }

//     while(j<n)
//     {
//         freq[str[i]]--;
//         i++;
//         j++;
//         freq[str[j]]++;
//         if(freq[str[j]]>1)
//         {
//             no
//             return;
//         }
//     }

//     yes
//     return;
    
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


void solve()
{
    string str;
    cin >> str;
    int n = str.size();

    set<char> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(str[i]);
    }
    int uniq = st.size();

    map<char, int> freq;

    int i = 0;
    int j = 0;

    // Initialize frequency for the first window
    while (j < uniq)
    {
        freq[str[j]]++;
        if (freq[str[j]] > 1) 
        {
            cout << "NO\n";
            return;
        }
        j++;
    }

    // Sliding window to check the rest of the string
    while (j < n)
    {
        freq[str[i]]--;
        if (freq[str[i]] == 0)
        {
            freq.erase(str[i]);
        }
        i++;
        
        freq[str[j]]++;
        if (freq[str[j]] > 1)
        {
            cout << "NO\n";
            return;
        }
        j++;
    }

    cout << "YES\n";
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
