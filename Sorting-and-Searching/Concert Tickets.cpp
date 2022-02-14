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

    int n, m; cin>>n>>m;
    multiset<int, greater<int>> ti;
    for(int i=0; i<n; i++){
        int b; cin>>b;
        ti.insert(b);
    }


    while(m--){
        int p; cin>>p;
        auto mm = ti.lower_bound(p);
        if(mm == ti.end()){
            cout<<-1<<"\n";
        }
        else{

            cout<<*mm<<"\n";

            ti.erase(mm);
        }
    }



    return 0;
}





