#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

void makeList(unordered_map<int,list<int>> &adj,vector<vector<int>> &v){
	
	for(int i=0;i<v.size();i++){
		int x = v[i][0];
		int y = v[i][1];
		
//		adj[x].insert(y);
//		adj[y].insert(x);

	adj[x].push_back(y);
	adj[y].push_back(x);
	}
	
}
void printGraph(unordered_map<int,list<int>> &adj)
{
	for(auto ele:adj){
		cout << ele.first <<"->";
		for(auto i:ele.second){
			cout << i <<",";
		}cout<<endl;
	}
}
void bfs(unordered_map<int,list<int>> &adj,vector<int> &vis,vector<int> &ans,int node){
	
	queue<int> q;
	q.push(node);
	vis[node]=1;
	
	while(!q.empty()){
		int frontele = q.front();
		q.pop();
		ans.push_back(frontele);
		
		for(auto ele : adj[frontele]){
			if(!vis[ele]){
					q.push(ele);
					vis[ele]=1;
			}		
		}
	}	
} 
void dfs(unordered_map<int,list<int>> &adj,vector<int> &vis,vector<int> &res,int node){
	
	queue<int> q;
	q.push(node);
	vis[node] = 1;
	
	while(!q.empty()){
		int frontNode = q.front();
		q.pop();
		res.push_back(frontNode);
		
		for(auto ele : adj[frontNode]){
			if(!vis[ele])
				dfs(adj,vis,res,ele);
		}	
	}
	
}
int main(){
	int edges,vertex;
	cout << "enter vertices and edges\n";
	cin >> vertex;
	cin >> edges;
	
	vector<vector<int>> vec(edges,vector<int>(2));
	cout << "enter elements\n";
	for(int i=0; i<edges; i++){
		cin >> vec[i][0] >> vec[i][1]; 
	}
	
	unordered_map<int,list<int>> adj;
	vector<int> vis(edges,0);
	vector<int> ans ;	
	makeList(adj,vec);
	
//	printGraph(adj);

	for(int i=1; i<=edges; i++){
		if(!vis[i]){
		bfs(adj,vis,ans,i);
		}
//		ans.push_back(res);
	}
	for(auto ele:ans){
		cout << ele << " ";
	}cout<<endl;
	
	vector<int> visited(edges,0);
	vector<int> res;
	for(int i=1;i<=edges;i++){
		if(!visited[i])
			dfs(adj,visited,res,i);
	}
	for(auto ele:res){
		cout << ele << " ";
	}
}