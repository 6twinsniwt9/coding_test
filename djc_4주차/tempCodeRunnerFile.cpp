#include <iostream>
#include <set>
using namespace std;
set<int> ss;
int board[6][6];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
void dfs(int r,int c,int cnt,int result){
    if(cnt==5) ss.insert(result);
    else{
        for(int i=0;i<4;i++){
            r=dx[i]+r; c=dy[i]+c;
           if(r>0&&r<5&&c>0&&c<5){
               result=10*result+board[r][c];
                dfs(r,c,cnt+1,result);
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
    cout<<ss.size();
}