#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <limits>
#include <math.h>
#include <stack>
#include <set>
#include <unordered_map>
#include <climits>
#define ll long long int 
#define fastio  ios::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'  
#define rep(i,n) for (int i = 0;i<n;i++) 
//  const intt maxn = 1e6+1;
using namespace std;

bool haveSameSign(int a, int b) {
    return (a >= 0 && b >= 0) || (a < 0 && b < 0);
}

int main(){
    fastio;
    ll testcases ;
    cin>>testcases;
    while(testcases--){
      ll n ;
      cin>>n;
      vector<ll>a(n,0);
      for (ll i = 1;i<n;i++) {
        for(ll j=i;j<n;j+=i){
          a[j]++;
        }
      }
      for (ll i = 2;i<n;i++){
        if(a[i]==2){
          cout<<i<<" ";
        }
      }
    } 
  return 0 ;  
    
}

