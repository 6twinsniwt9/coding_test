#include <iostream>
#include <cstring>//memset사용하기위함
using namespace std;
bool farm[55][55];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool visited[55][55]={0,};
void dfs(int r,int c,int M,int N){
    visited[r][c]=true;
    for(int i=0;i<4;i++){
         int dr=r+dx[i]; int dc=c+dy[i];
        if(0<=dr&&dr<M&&0<=dc&&dc<N){
            if(farm[dr][dc]==true&&!visited[dr][dc]) dfs(dr,dc,M,N);
        } 
    }
}
int main(){
    int th,M,N,num,r,c,cnt=0;
    cin>>th;
    for(int i=0;i<th;i++){
        cin>>M>>N>>num;
        memset(farm,false,sizeof(farm));//동일 scope내에서 사용 가능 문법
        memset(visited,false,sizeof(visited));
        cnt=0;
        for(int j=0;j<num;j++){
            cin>>r>>c;
            farm[r][c]=true;
        }
        for(int r=0;r<M;r++){
            for(int c=0;c<N;c++){
                if(!visited[r][c]&&farm[r][c]==1){
                    dfs(r,c,M,N);
                    cnt++;    
                }
            }
        }
        cout<<cnt<<"\n";
    }
}