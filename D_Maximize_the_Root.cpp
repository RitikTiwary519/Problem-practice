# include <bits/stdc++.h>
using namespace std;
# define no cout <<"NO" << endl
# define yes cout << "YES"<< endl
# define ll long long int
# define flp(i,k,n) for(ll i = k;i<n;i++)
# define rflp(i,k,n) for(ll i = k-1;i>=n;i--)
# define i(i) ll i;cin >> i;
# define ic(i) char i;cin >> i;
# define ia(a,n) ll a[n];for(ll i=0;i<n;i++)cin >> a[i];
# define ica(a,n) char a[n];for(ll i=0;i<n;i++)cin >> a[i];
# define is(s) string s;cin >> s;
# define mod 1000000007


// bool isPrime(int n)
// {
//     if (n <= 1)
//         return false;
 
//     for (int i = 2; i <= sqrt(n); i++)
//         if (n % i == 0)
//             return false;
 
//     return true;
// }



// void dfs(ll node,ll iter,int ind,vector<queue<pair<ll,ll>>>& v,set <ll> &s,ll &sum){
//     s.insert(node);
//     // cout << "node-->" << node <<"  iter-->" << iter<< endl;
//     ll w=0;
//     while(!v[node-1].empty()){
//         ll u=iter;
//         ll t1=v[node-1].front().first;
//         ll t2=v[node-1].front().second;
//         // cout << t1 << " " << t2 << endl;
//         if(s.find(t1)!=s.end()){
//             v[node-1].pop();
//             continue;
//         }
//         else{
//             if(t2<ind)u++;
//             sum=max(sum,u);
//             // cout << "iter-->"<< iter << " sum" << sum<< endl;
//             dfs(t1,u,t2,v,s,sum);
//         }
//         v[node-1].pop();    
//     }
// }


// bool comp(pair<ll,ll> p1 ,pair<ll,ll> p2){
//     if(p1.second==p2.second)return p1.first>p2.first;
//     else return p1.second < p2.second;
// }

long long int solve(int node ,vector<ll> adj[],long long int arr[]){
    if(adj[node].size()==0)return arr[node-1];
    ll mini = INT_MAX;
    for(auto it : adj[node]){
        mini = min(mini,solve(it,adj,arr));
    }
    if(node==1)return mini+arr[0];
    ll temp ;
    if(mini>arr[node-1])temp = arr[node-1] + (mini-arr[node-1])/2;
    else temp = mini;
    return temp;
}

void solve(){

    i(n);
    ia(a,n);
    ia(b,n-1);
    vector<ll> adj[n+1];
    for(int i=0;i<n-1;i++){
        adj[b[i]].push_back(i+2);
    }

    ll ans = solve(1,adj,a);
    cout << max(a[0],ans) << endl;

    
    

    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    cin >> t;
    while(t--)solve();
}