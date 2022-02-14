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
    int n, m,k; cin>>n>>m>>k;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int res =0, i=0, j=0;

    while(i<n && j<m){
        if(abs(a[i]-b[j])<=k){
            res++;
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }

    cout<<res<<"\n";

    return 0;
}





