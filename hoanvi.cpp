#include<bits/stdc++.h>
#define el cout<<"\n"
using namespace std;
void solve(){
	string st;
	cin>>st;
	map<int,int> mp;
	for(auto x : st){
		mp[x-'0']++;
	}
	for(int i=9;i>=0;i--){
		for(int j=1;j<=mp[i];j++)cout<<i;
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

