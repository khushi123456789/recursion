#include<iostream>
#include<bits/stdc++>
using namespae std;
bool issafe(int **arr,int x.int y,int n){
	if(arr[x][y]==1&&x<n&&y<n)
	return true;
	return false;
}
int move(int **arr,int x,int y,int n,int **soln){
if(x==n-1&&y==n-1)
{
soln[x][y]=1;
return true;
}
if(issafe(arr,x,y,n)){
	soln[x][y]=1;
	if(move(arr,x+1,y, n,soln));
	return true;

	
	  if(move(arr,x,y+1, n,soln));
	  return true;

soln[x][y]=0;
return false;
}
return false;
}
int main(){
	int arr={(1,1,0,1,1),(1,0,1,0,1),(1,1,0,0,0),(1,1,1,1,0),(1,0,0,0,0)};
	move(int **arr,0,0,5,0);
	return 0;
}
