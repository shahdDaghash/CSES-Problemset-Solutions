#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define scanArray(a,n) for(int i = 0; i < n; i++){cin >> a[i];}
#define coutArray(a,n) for(int i = 0; i < n; i++){cout << a[i] << " ";};cout << endl;
#define MOD 1000000007
#define PI 3.141592653589793
#define ll long long

using namespace std;


int main()
{
    FAST
    //int t; cin>>t;
    int t = 1;
    while(t--)
    {
        int n; cin>>n;
        for(int i=0; i<(1<<n); i++){
            int val = i ^(i>>1);
            bitset<32> r(val);
            string s = r.to_string();
            cout << s.substr(32 - n) << "\n";
        }
    }
    return 0;
}

