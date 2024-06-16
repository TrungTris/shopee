#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+3;
int n , a[N];
struct SegmentTree{
	int seg[4*N];
	
	void build(int id , int l , int r){
		if(l==r){
			seg[id]=a[l];
			return;
		}
		
		int mid =(l+r)/2;
		build(id*2 , l , mid);
		build(id*2 + 1 , mid + 1 , r);
		
		seg[id] = max(seg[id*2] , seg[id*2 + 1]);
	}	
	
	void update(int id , int l , int r , int pos , int val){
		if(l>pos || r<pos || l>r){
			return;
		}
		if(l==r){
			seg[id] = val;
			return;
		}
		
		int mid = (l+r)/2;
		update(id*2 , l , mid , pos , val);
		update(id*2 + 1 , mid + 1 , r , pos , val);
		
		seg[id] = max(seg[id*2] , seg[id*2 + 1]);
	}
	
	int get_max(int id , int l , int r , int u , int v){
		if(l>v || r<u || l>r)return INT_MIN;
		if(l>=u && r<=v){
			return seg[id];
		}
		
		int mid = (l+r)/2;
		return max(get_max(id*2 , l , mid , u , v) , get_max(id*2 + 1 , mid+1 , r , u , v));
	}
}st;
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int t;
	cin>>t;
	st.build(1,1,n);
	while(t--){
		int type;
		cin>>type;
		if(type==0){
			int pos,val;
			cin>>pos>>val;
			st.update(1,1,n,pos,val);
		}
		else{
			int u,v;
			cin>>u>>v;
			cout<<st.get_max(1,1,n,u,v)<<endl;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	freopen("test.txt" , "r" , stdin);
  freopen("cophieu.inp" , "r" , stdin);
  freopen("cophieu.out" , "w" , stdout);
	solve();
	return 0;
}

