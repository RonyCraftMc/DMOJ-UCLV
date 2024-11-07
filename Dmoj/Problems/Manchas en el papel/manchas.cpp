#include <bits/stdc++.h>
#define int long long 
#define Rony_Js signed
#define endl '\n'

using namespace std;
	int n, m;
	vector<vector<bool>>graph(1e3+15, vector<bool>(1e3+15 , false));
	vector<vector<bool>>vis(1e3+15, vector<bool>(1e3+15, false));

	int c = 0;
	vector<int>mov_x = {-1,0,0,1};
	vector<int>mov_y = {0,1,-1,0};
	vector<int>cont;

	bool validc(int x , int y){
		if(x>=0 && x<=n && y>=0 && y<= m){
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

	cin>>n>>m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char k;
            cin>>k;
           if(k=='1') graph[i][j] = true;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
		if(vis[i][j] || graph[i][j] == false)continue;
		bfs({i,j});
		cont.push_back(c);
       // cout<<c<<endl;
		c = 0;
        }
        
    }

	
	sort(cont.rbegin(), cont.rend()); 
	cout<<cont.size()<<" "<<cont[0]<<endl;
	
	return 0;
	}