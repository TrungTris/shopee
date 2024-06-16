#include<bits/stdc++.h>
#define el cout<<"\n"
using namespace std;
int tong , chua_to , dup;
void solve(){
	int m;
	cin>>m;
	while(m--){
		int cnt_khong_to = 0;
		int cnt_chua_to = 0;
		int cnt_co_to = 0;
		for(int i=1;i<=4;i++){
			int tmp; cin>>tmp;
			if(tmp<=10)cnt_khong_to++;
			if(tmp>10 && tmp<100)cnt_chua_to++;
			if(tmp>=100)cnt_co_to++;
		}
		if(cnt_khong_to == 3 && cnt_chua_to == 1)chua_to++,tong++;
		else if(cnt_chua_to>1 || cnt_co_to>=1 && cnt_chua_to>=1)dup++,tong++;
	}
	cout<<tong<<" "<<chua_to<<" "<<dup;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	freopen("test.txt" , "r" , stdin);
  freopen("nghivan.inp" , "r" , stdin);
  freopen("nghivan.out" , "w" , stdout);
	solve();
	return 0;
}

