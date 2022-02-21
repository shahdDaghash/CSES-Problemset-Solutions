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
    int n; cin>>n;
    vector<pair<int,bool> > v;
    for(int i=0; i<n; i++){
        int a,b; cin>>a>>b;
        v.push_back(make_pair(a, true));
        v.push_back(make_pair(b, false));
    }
    sort(v.begin(), v.end());
    int mx = 0;
    int curr = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i].second == true){
            curr++;
        }
        else{
            curr--;
        }
        mx = max(mx, curr);
    }

    cout<<mx;


    return 0;
}
