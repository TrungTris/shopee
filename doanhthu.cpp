#include<bits/stdc++.h>
using namespace std;
const int N =1e3+1;
int a[N] , sum[N];
void solve(){
	int n,S;;
	cin>>n>>S;
	int res = INT_MAX;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i==1)sum[i]=a[i];
		else sum[i] = sum[i-1] + a[i];
	}
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			if(sum[i] - sum[j-1]>=S)res = min(res,i-j+1);
		}
	}
	if(res==INT_MAX)cout<<-1;
	else cout<<res;
	
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	freopen("test.txt" , "r" , stdin);
    freopen("doanhthu.inp" , "r" , stdin);
    freopen("doanhthu.out" , "w" , stdout);
	solve();
	return 0;
}

