#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isSafe(int newx,int newy,vector<vector<bool>> &vis,
			vector<vector<int>> &arr,int n){
				
	if((newx >= 0 && newx < n) && (newy >= 0 && newy < n) && (arr[newx][newy] == 1) && (vis[newx][newy] != 1))
		return true;
	else
		return false;				
}

void solveRatMaze(int x,int y,vector<vector<int>> &arr,
						vector<vector<bool>> &vis,int n,string path,vector<string> ans){
	
	if(x == n-1 &&  y == n-1){
		ans.push_back(path);
	}
		cout << " hi " ;

	// D L R U
	vis[x][y] = 1;
	// DOWN
	if(isSafe(x+1,y,vis,arr,n)){
		solveRatMaze(x,y,arr,vis,n,path+'D',ans);
	}
	// LEFT
	if(isSafe(x,y-1,vis,arr,n)){
		solveRatMaze(x,y,arr,vis,n,path+'L',ans);
	}
	// RIGHT
	if(isSafe(x,y+1,vis,arr,n)){
		solveRatMaze(x,y,arr,vis,n,path+'R',ans);
	}
	// UP
	if(isSafe(x-1,y,vis,arr,n)){
		solveRatMaze(x,y,arr,vis,n,path+'U',ans);
	}
	vis[x][y] = 0;
}

int main(){
	
	vector<vector<int>> arr(4,vector<int>(4,0));
	vector<vector<bool>> vis(4,vector<bool>(4));
	
	arr[0][0] = 1;
	arr[1][0] = 1;
	arr[1][1] = 1;
	arr[2][0] = 1;
	arr[2][1] = 1;
	arr[3][1] = 1;
	arr[3][2] = 1;
	arr[3][3] = 1;
	
	string str = "";
	vector<string> ans;
	
	solveRatMaze(0,0,arr,vis,4,str,ans);
	
	cout << ans.front() <<endl;
}