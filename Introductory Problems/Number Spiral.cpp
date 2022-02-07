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
    //t = 1;
    cin>>t;
    while(t--)
    {
        ll x, y; cin>>x>>y;
        ll ans;
        if(x<y){
            if(y%2){
                ans = (y*y)-x+1;
            }
            else
                ans = ((y-1)*(y-1))+x;
        }
        else{
            if(x%2)
                ans = ((x-1)*(x-1))+y;
            else{
                ans = (x*x)-y+1;
            }
        }
        cout<<ans<<"\n";
 
 
    }
    return 0;
}
