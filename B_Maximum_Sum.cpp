# include <bits/stdc++.h>
using namespace std;
# define no cout <<"NO" << endl
# define yes cout << "YES"<< endl
# define ll long long int
# define floop(i,k,n) for(int i = k;i<n;i++)
# define rfloop(i,k,n) for(int i = k-1;i>=n;i--)

void solve(){
    int n,k;
    cin >> n >> k;
    ll arr[n];
    
    floop(i,0,n){
        cin >> arr[i];
    }
    sort(arr,arr+n);  
    
    ll sum[n];
    sum[0] = arr[0];

    floop(i,1,n){
        sum[i] = sum[i-1]+arr[i];
    }

    int ind1 = 0,ind2 = n-k;
    ll ans = sum[n-k-1];
    while(ind2<n){
        ans = max(ans,sum[ind2]- sum[2*ind1+1]);
        ind2++;
        ind1++;
    }

    cout << ans << endl;
    
}
    


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t ;
    cin >> t;
    while(t--){
        solve();
    }

    
}