#include <iostream>//dfs로는 최소 거리 구할 수 없다는 것을 꺠달은 문제...1325번이랑 구별 잘하기!
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
int dx[8]={1,2,1,2,-1,-2,-1,-2};
int dy[8]={2,1,-2,-1,-2,-1,2,1};
bool visited[300][300]={0,};
int cnt=0;
void bfs(int r,int c,int length,int end_r,int end_c){
    visited[r][c]=true;
    queue<pair<pair<int,int>,int>> q;
    q.push(make_pair(make_pair(r,c),0));
    q.pop();
    while(!q.empty()){
        if(q.front().first.first==end_r&&q.front().first.second==end_c){
            cnt=q.front().second;
        }
        for(int i=0;i<8;i++){
            int dr=q.front().first.first+dy[i];
            int dc=q.front().first.second+dx[i];
            int num=q.front().second;
            if(0<=dr&&dr<length&&0<=dc&&dc<length){
                if(!visited[dr][dc]){
                    visited[dr][dc]=true;
                    q.push(make_pair(make_pair(dr,dc),num+1));
                }
            }
        }
    }
}

int main(){
    int test,length,start_r,start_c,end_r,end_c;
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>length>>start_r>>start_c>>end_r>>end_c;
        bfs(start_r,start_c,length,end_r,end_c);
        cout<<cnt<<"\n";
    }
}
/*void dfs(int r,int c,int length,int end_r,int end_c,int cnt){
    if(r==end_r&&c==end_c) cout<<cnt;
    else{
        visited[r][c]=true;
        for(int i=0;i<8;i++){
            int dr=r+dx[i]; int dc=c+dy[i];
            if(0<=dr&&dr<length&&0<=dc&&dc<length){
                if(!visited[dr][dc]) dfs(dr,dc,length,end_r,end_c,cnt+1);
            }
        }
    }
}*/