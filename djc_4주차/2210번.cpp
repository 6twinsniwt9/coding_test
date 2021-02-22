#include <iostream>
//#include <set> 중복된 값을 받지 않고 정렬 시켜주는 컨테이너 but 사용안함
using namespace std;
//set<int> s;
int board[6][6];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool v[1000000];// 특정 값 있는지 없는지 체크
int ans=0;
void dfs(int r,int c,int cnt,int result){
    if(cnt==5){
        if(v[result]==false){
            v[result]=true;
            ans++;//s.insert(result);
        }
    }
    else{
        for(int i=0;i<4;i++){
            int dr=dx[i]+r; int dc=dy[i]+c;//r,c자체를 바꿔주면 err!->지역변수 전역변수 차이점 확실히!
            if(dr>=0&&dr<5&&dc>=0&&dc<5){
                dfs(dr,dc,cnt+1,result*10+board[dr][dc]);//result값 자체를 바꿔서 넣어주면 err!
           }
       }
   }
} 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) cin>>board[i][j];
    }
    for(int r=0;r<5;r++){
        for(int c=0;c<5;c++) dfs(r,c,0,board[r][c]);
    }
    cout<<ans;//cout<<s.size();
}