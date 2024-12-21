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


// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         string a,b;
//         cin>>a;
//         cin>>b;
//         int ans=0;
//         for(int i=0;i<a.size();i++)
//         {
//             int count=0;
//             int temp = i;

//             for (int k = 0; k < b.size(); k++)
//             {
//                 for(int j = k ; j<b.size(); j++)
//                 {

//                     if(a[i]==b[j])
//                     {
//                         count++;
//                         ans = max(ans,count);
//                         i++;
//                     }
//                     else
//                     {
//                         break;
//                     }
//                 }   
//             }
            
//         }
//         cout<<(a.size()-ans)+(b.size()-ans)<<endl;
//     } 
// }
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string a,b;
        cin>>a;
        cin>>b;
        int ans=0;
        for(int i=0;i<a.size();i++)
        {

            int temp = i;

            for (int k = 0; k < b.size(); k++)
            {
                int count=0;
                for(int j = k ; j<b.size(); j++)
                {

                    if(a[i]==b[j])
                    {
                        count++;
                        ans = max(ans,count);
                        i++;
                    }
                    else
                    {
                        break;
                    }
                }   
            }
            i=temp;
        }
        cout<<(a.size()-ans)+(b.size()-ans)<<endl;
    } 
}
