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
        string s; cin>>s;
        sort(s.begin(), s.end());
        vector<vector<char> > v;
        vector<char> start;
        for(int i=0; i<s.size(); i++){
            start.push_back(s[i]);
        }
        do{
           v.push_back(start);
        }while(next_permutation(start.begin(), start.end()));
        cout<<v.size()<<"\n";
        for(int i=0; i<v.size(); i++){
            for(int j=0; j<v[i].size(); j++){
                cout<<v[i][j];
            }
            cout<<"\n";
        }
    }
    return 0;
}

