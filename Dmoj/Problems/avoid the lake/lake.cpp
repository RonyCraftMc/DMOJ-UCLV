#include <bits/stdc++.h>
#define int long long 
#define Rony_Js signed
#define endl '\n'

using namespace std;
	int n, m, k;
	vector<vector<bool>>graph(500, vector<bool>(500 , false));
	vector<vector<bool>>vis(500, vector<bool>(500, false));

	vector<pair<int,int>>lis(110*110);
	int c = 0;
	vector<int>mov_x = {-1,0,0,1};
	vector<int>mov_y = {0,1,-1,0};
	vector<int>cont;

	bool validc(int x , int y){
		if(x>0 && x<=n && y>0 && y<= m){
			if (graph[x][y]) return true;
			else return false;
		}else return false;
	}

	void bfs(pair<int, int> init){
		queue<pair<int, int> >q;
		q.push(init);
		while(!q.empty()){
			//cout<<1<<endl;
			pair<int , int>idx = q.front();
			q.pop();
			if(vis[idx.first][idx.second])continue;
			vis[idx.first][idx.second] = true;
			c++;
			for(int i = 0; i<4; i++){
				int x = idx.first + mov_x[i] , y = idx.second + mov_y[i];
				if(validc(x , y)){
					q.push({x,y});
				}
			}
		}
	}

Rony_Js main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	cin>>n>>m>>k;

	for(int i = 0; i<k; i++){
		int a,b;
		cin>>a>>b;
		lis[i].first = a;
		lis[i].second = b;
		//cout<<1<<endl;
		graph[a][b] = true;
		
	}
	for (int i = 0; i < k; i++)
	{	
		if(vis[lis[i].first][lis[i].second])continue;
		bfs(lis[i]);
		cont.push_back(c);
		c = 0;
	}
	sort(cont.rbegin(), cont.rend());
	cout<<cont[0]<<endl;
	
	return 0;
	}