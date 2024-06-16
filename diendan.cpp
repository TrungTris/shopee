#include<bits/stdc++.h>
#define el cout<<"\n"
const int N=1e5+1;
int dp[N] , a[N];
using namespace std;
void solve(){
	int n,m;
	cin>>n>>m;
	vector<pair<int,int> > vt;
	vector<int> vtt;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	vtt.push_back(a[1]);
	vtt.push_back(a[n]);
	for(int i=2;i<=n-1;i++){
		vt.push_back({min(a[i]-a[i-1] , a[i+1]-a[i]) , a[i]});
	}
	for(int i=1;i<=n-m;i++){
		int idx = 0 , res = INT_MAX;
		for(int j = 0;j<vt.size();j++){
			if(res>vt[j].first){
				res = vt[j].first;
				idx = j;
			}
		}
		vt.erase(vt.begin() + idx);
	}
	for(auto x : vt){
		vtt.push_back(x.second);
	}
	sort(vtt.begin() , vtt.end());
	if(vtt.size()==2)cout<<vtt[1] -vtt[2]<<"\n";
	else{
		int res = INT_MAX;
		for(int i=1;i<vtt.size()-1;i++){
			res = min({res , vtt[i]-vtt[i-1] , vtt[i+1] - vtt[i]});
//			cout<<vtt[i];
		}
//		for(auto x : vtt)cout<<x<<" ";
		cout<<res<<"\n";
	}	 
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	freopen("test.txt" , "r" , stdin);
    freopen("diendan.inp" , "r" , stdin);
    freopen("diendan.out" , "w" , stdout);
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}

