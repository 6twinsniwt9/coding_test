#include <iostream>
#include <vector>
using namespace std;
vector<int> v[110];
bool visited[110]={0,};
int result;
void dfs(int a,int b,int n){
    if(a==b) {
        result=n;
        return;
    }
    for(int i=0;i<v[a].size();i++){
        int parent=v[a][i];
        if(visited[parent]) continue;
        visited[parent]=true;//위치가 관건!(8이 들어왔을 때 2입력 비교 후 push해줘야함)
        dfs(parent,b,n+1);//n++하면 안됨...++n도 안됨...이유는?n값 자체가 계속 바뀐다.
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int node,a,b,N,child,parent;
    cin>>node>>a>>b>>N;
    for(int i=0;i<N;i++){
        cin>>parent>>child;
        v[parent].push_back(child);
        v[child].push_back(parent);
    }
    dfs(a,b,0);
    if(result==0) cout<<-1;
    else cout<<result;
}