#include<bits/stdc++.h>
#define el cout<<"\n"
using namespace std;
const int N = 1e2+2;
struct diem{
	int x,y,w;
};
int dx[] {1,-1,0,0};
int dy[] {0,0,-1,1};
int n,m;
int a,b;
int t[N][N] , vst[N][N] , d[N][N];
bool check(int a , int b){
	return a>0 && a<=n && b>0 && b<=m;	
}
void nhap(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>t[i][j];
			d[i][j] = inf;
		}
	}
	cin>>a>>b;
}
void dijsktra(int x ,int y){
	priority_queue<diem , vector<diem> , greater<diem> > qu;
	qu.push({x,y,t[x][y]});
	vst[x][y] = 1;
	while(!qu.empty()){
		int u = qu.front().x;
		int v = qu.front().y;
		int uv = qu.front().w;
		qu.pop();
		if(vst[x][y] == 1)continue;
		
	}
}
void solve(){
	nhap();
	bfs(1,1);
	cout<<d[a][b];
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("test.txt" , "r" , stdin);
//  freopen(".inp" , "r" , stdin);
//  freopen(".out" , "w" , stdout);
	solve();
	return 0;
}

