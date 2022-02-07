#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define scanArray(a,n) for(int i = 0; i < n; i++){cin >> a[i];}
#define coutArray(a,n) for(int i = 0; i < n; i++){cout << a[i] << " ";};cout << endl;
#define MOD 1000000007
#define PI 3.141592653589793
#define ll long long
 
using namespace std;
 
ll fastpow(int v,  ll p)
{
    if (p == 0)return 1;
    if (p == 1)return v;
    long long ans = fastpow(v, p/2)%MOD;
    ans *= ans;
    ans %= MOD;
    if (p%2 == 1)return (ans * v)%MOD;
    else return ans;
}
 
int main()
{
    FAST
    //int t; cin>>t;
    int t = 1;
    while(t--)
    {
        int n; cin >> n;
        int total = 0;
        for (int i = 5; n / i >= 1; i *= 5)
        {
            total += n / i;
        }
        cout << total;
 
    }
    return 0;
}
