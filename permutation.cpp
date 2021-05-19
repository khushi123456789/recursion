#include<iostream>
#include<bits/stdc++>
using namespae std;
vector<vector<int>> ans;
int solve(vector<int> &arr,int n){
	if(arr.length()==n)
	{
		ans.push_back(arr);
		return 0;
	}
	
	for(int i=n;i<arr.size();i++){
		swap(arr[i],arr[n]);
		solve(arr,n+1);
		swap(arr[i],arr[n]);
	}
 
}
int main(){
//	move("xmasxtree");
	return 0;
}
