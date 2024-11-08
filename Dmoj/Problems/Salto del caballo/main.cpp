#include <bits/stdc++.h>
#define endl '\n'
#define elif else if
#define Rony_Js signed 

using namespace std;

int x, y, x2, y2;

vector<vector<bool>>graph(8, vector<bool>(8, false));

vector<int>mov_x = {1,2, 2, 1};
vector<int>mov_y = {2,1,-1,-2};

bool valid(int z, int w){
    return (z<8 && z>=0 && w>=0 && w<8) ? true : false;
}


void bfs(){

    queue<pair<int, int> >q;
    q.push({x,y});
    while(!q.empty()){
        pair<int,int>idx;
        idx = q.front();
        q.pop();
        if(graph[idx.first][idx.second])continue;
        graph[idx.first][idx.second]=true;
      //  cout<<idx.first<<" "<<idx.second<<endl;
        for(int i = 0; i<4; i++){
            if(valid(idx.first+mov_x[i],idx.second+mov_y[i])){
                if(!graph[idx.first+mov_x[i]][idx.second+mov_y[i]])
                q.push({idx.first+mov_x[i],idx.second+mov_y[i]});
            }
        }
    }



}

Rony_Js main(){
    
    cin>>x>>y>>x2>>y2;
    x--;
    y--;
    x2--;
    y2--;
    bfs();
    if(graph[x2][y2] == true)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
 return 0;
}