#include<iostream>
#include<bits/stdc++>
using namespae std;
int move(string s,string a= " "){
	if(s.length()==0)
	return " ";
	char ch=s[0];
	int ans=s.substr(1);

	return move(s,ans);
	return move(s,ans+ch);
}
int main(){
	move("xmasxtree");
	return 0;
}
