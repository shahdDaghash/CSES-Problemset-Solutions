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
        string s; cin>>s;
        char before = s[0];
        int curr = 0;
        int mx = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==before){
                curr++;
            }
            else{
                mx = max(mx, curr);
                curr = 1;
                before = s[i];
            }
        }
        mx = max(mx, curr);
        cout<<mx;
    }
    return 0;
}
