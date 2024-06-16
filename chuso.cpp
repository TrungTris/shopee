#include<bits/stdc++.h>
#define el cout<<"\n"
using namespace std;
void solve(){
	int n;
	cin>>n;
	int tmp = n*(n+1)/2;
	map<int,int> mp;
	while(tmp){
		mp[tmp%10]++;
		tmp/=10;
	}
	for(auto x : mp){
		cout<<x.first<<" "<<x.second<<"\n";
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	freopen("test.txt" , "r" , stdin);
//  freopen(".inp" , "r" , stdin);
//  freopen(".out" , "w" , stdout);
	solve();
	return 0;
}

