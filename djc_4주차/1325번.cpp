#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>//memset 사용하기 위함
using namespace std;
vector<int> v[10010];
bool visited[10010];
int len=0;
void length(int i){
    visited[i]=true;
    for(int j=0;j<v[i].size();j++){
        int parent=v[i][j];
        if(!visited[parent]){// 이거 위치에 따라 틀린것으로 채점된다..이유는?!
            len++;
            length(parent);
        }
    }
} 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int N,M,big=0;
    vector<int> max;
    cin>>N>>M;
    for(int i=0;i<M;i++){
        int parent,child;
        cin>>child>>parent;
        v[parent].push_back(child);
    }
    for(int i=1;i<N+1;i++){
        len=0;
        memset(visited,false,sizeof(visited));//중요중요! 계속 틀린 값 나온 원인 해결
        length(i);
        if(big<len){
            big=len;
            max.clear();
            max.push_back(i);
        }
        else if(big==len){
            max.push_back(i);
        }
    }
    for(int i=0;i<max.size();i++) cout<<max[i]<<" ";
    cout<<"\n";
}