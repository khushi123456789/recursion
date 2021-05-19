#include<iostream>
#include<bits/stdc++>
using namespae std;
bool issafe(int **arr,int x ,int y,int n){
	for(int i=x;i<x;i++)
	{
		if(arr[i][y]==1)
		return false;
	}
	int i=x;
	int j=y;
	while(i>=0&&j>=0)
	{
		if(arr[i][j]==1)
		return false;
	
	i--;
	j--;
}
	while(i>=0&&j<=n)
	{
		if(arr[i][j]==1)
		return false;

	i--;
	j++;
}
return true;
}
int move(int **arr,int x,int n){
	if(x>=n)
	return 1;
	for(int i=0;i<n;i++)
	{
		if(issafe(arr,x,i,n))
		{
			arr[x][i]=1;
		}
		if(move(arr,x+1,n)
		return true;
	}
	arr[x][i]=0;
	return false;
}
int main(){
	//move("xmasxtree");
	return 0;
}
