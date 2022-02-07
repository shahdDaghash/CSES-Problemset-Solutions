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
        ll n; cin>>n;
        ll total = n*(n+1)/2;
        if(total & 1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            vector<ll> a1, a2;
            total /= 2ll;
            while(n){
                if(total - n >=0){
                    a1.push_back(n);
                    total -= n;
                }
                else{
                    a2.push_back(n);
                }
                n--;
            }
            cout<<a1.size()<<"\n";
            for(int i=0; i<a1.size(); i++){
                cout<<a1[i]<<" ";
            }
            cout<<"\n"<<a2.size()<<"\n";
            for(int i=0; i<a2.size(); i++){
                cout<<a2[i]<<" ";
            }
        }
 
 
 
    }
    return 0;
}
