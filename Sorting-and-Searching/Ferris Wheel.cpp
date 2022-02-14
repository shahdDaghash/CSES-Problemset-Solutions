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
    int n, x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int i=0, j=n-1, taken = 1 ,res = 0, curr = 0;
    curr = a[j];

    while(i<j){
        if(taken == 2 || curr + a[i] > x){
            res++;
            j--;
            curr = a[j];
            taken = 1;
        }
        else{
            curr += a[i];
            i++;
            taken++;
        }
    }
    cout<<res+1;


    return 0;
}





