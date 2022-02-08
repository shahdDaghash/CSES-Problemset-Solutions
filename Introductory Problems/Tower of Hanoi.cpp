#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define scanArray(a,n) for(int i = 0; i < n; i++){cin >> a[i];}
#define coutArray(a,n) for(int i = 0; i < n; i++){cout << a[i] << " ";};cout << endl;
#define MOD 1000000007
#define PI 3.141592653589793
#define ll long long
 
using namespace std;
 
vector<string>v;
 
void towerOfHanoi(int n, int from_rod, int to_rod, int aux_rod)
{
    if (n == 1)
    {
        v.push_back(to_string(from_rod)+ " " + to_string(to_rod));
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    v.push_back(to_string(from_rod)+ " " + to_string(to_rod));
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
 
 
int main()
{
    FAST
    //int t; cin>>t;
    int t = 1;
    while(t--)
    {
        int n; cin>>n;
        towerOfHanoi(n,1,3,2);
        cout<<v.size()<<"\n";
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<"\n";
        }
    }
    return 0;
}
