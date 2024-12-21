

#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

typedef long long ll;

ll quadSolve(ll a, ll b, ll c) {
    ll discriminant = b * b - 4 * a * c;
    ll root = (-b + sqrt(discriminant)) / (2 * a);
    return root;
}

void solve() {
    ll n, w;
    cin >> n >> w;

    ll b = 0;

    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        b += x;
        w -= (x * x);
    }

    ll result = quadSolve(1,b/(n), -1*w/(4*n));
    cout << (ll)(result) << endl;
}

int main() {
    int t;
    cin >> t;
    if (t <= 0) {
        cout << "Invalid number of test cases" << endl;
        return 0;
    }
    while (t--) {
        solve();
    }
    return 0;
}
