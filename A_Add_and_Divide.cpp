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
    long long a,b;
    cin>>a>>b;

    long long count = 0 ;


    while(a!=0)
    {
        if( (log2(a)/log2(b)) >( 1+(log2(a)/log2(b+1))))
        {
            b+=1;
            count++;
            cout<<"increase"<<a<<" -------"<<b<<endl;
        }
        count++;
        a=a/b;
        cout<<"divide"<<a<<" -------"<<b<<endl;
    }

    cout<<count<<endl;

}

#include <iostream>
using namespace std;

void solve1()
{
    long long a, b;
    cin >> a >> b;

    long long count = 0;

    while (a != 0)
    {
        // If b is 1, increment it to avoid infinite division
        if (b == 1)
        {
            b++;
            count++;
            continue;
        }

   // Check if it's better to increase b before dividing
        if (log2(a) / log2(b) > 1 + (log2(a) / log2(b + 1)))
        {
            b += 1;
            count++;
           // cout << "increase " << a << " ------- " << b << endl;
        }
        else
        {
            a = a / b; // Divide a by b
            count++;
            //cout << "divide " << a << " ------- " << b << endl;
        }
    }

    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve1();
    }

    return 0;
}
