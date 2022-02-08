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
        string s; cin>>s;
        map<char, int> mp;
        vector<char> v;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
            v.push_back(s[i]);
        }
        if(s.size()%2==0){ //even
            for(auto x: mp){
                if(x.second % 2 != 0){
                    cout<<"NO SOLUTION";
                    return 0;
                }
            }
            string res = "";
            for(int i=0; i<s.size(); i++){
                res += " ";
            }
            int ind = 0;
            for(int i = 0; i<v.size(); i++){
                while(mp[v[i]]!=0){
                    res[ind] = v[i];
                    res[res.size()-ind-1] = v[i];
                    mp[v[i]]-=2;
                    ind++;
                }
            }
            cout<<res;
        }
        else{ //odd
            int cnt=0;
            for(auto x: mp){
                if(x.second % 2 != 0){
                    cnt++;
                }
            }
            if(cnt!=1){
                cout<<"NO SOLUTION";
                return 0;
            }
 
            string res = "";
            for(int i=0; i<s.size(); i++){
                res += " ";
            }
            int ind = 0;
            for(int i = 0; i<v.size(); i++){
                while(mp[v[i]]!=0 && mp[v[i]]!=1){
                    res[ind] = v[i];
                    res[res.size()-ind-1] = v[i];
                    mp[v[i]]-=2;
                    ind++;
                }
            }
            for(auto x: mp){
                if(x.second == 1){
                    res[res.size()/2] = x.first;
                }
            }
            cout<<res;
        }
    }
    return 0;
}
