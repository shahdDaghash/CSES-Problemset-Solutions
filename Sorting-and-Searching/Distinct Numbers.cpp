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
    int n; cin>>n;
    set<int> st;
    for(int i=0; i<n; i++){
        int b; cin>>b;
        st.insert(b);
    }
    cout<<st.size();



    return 0;
}

