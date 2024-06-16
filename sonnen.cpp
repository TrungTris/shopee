#include<bits/stdc++.h>
#define el cout<<"\n"
using namespace std;
long long dp[100];
void solve(){
	int n;
	cin>>n;
	dp[1] = 1;
	dp[2] = 1;
	if(n<3)cout<<1;
	else{
		for(int i=3;i<=90;i++){
			dp[i] = dp[i-1] + dp[i-2];
			if(i==n){
				cout<<dp[i];
				return;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	freopen("test.txt" , "r" , stdin);
  freopen("sonnen.inp" , "r" , stdin);
  freopen("sonnen.out" , "w" , stdout);
	solve();
	return 0;
}

