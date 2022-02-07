#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define scanArray(a,n) for(int i = 0; i < n; i++){cin >> a[i];}
#define coutArray(a,n) for(int i = 0; i < n; i++){cout << a[i] << " ";};cout << endl;
#define MOD 1000000007
#define MOD2 998244353
#define PI 3.141592653589793
#define ll long long
 
using namespace std;
 
 
 
int main()
{
    FAST
    int t;
    t = 1;
    //cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        ll cnt = 0;
        for(int i=1; i<n; i++){
            if(a[i]<a[i-1]){
                int re = a[i-1]-a[i];
                cnt+=re;
                a[i] = a[i-1];
            }
        }
        cout<<cnt;
 
    }
    return 0;
}
