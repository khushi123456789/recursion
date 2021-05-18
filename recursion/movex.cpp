#include<iostream>
#include<bits/stdc++>
using namespae std;
int move(string s){
	if(s.length()==0)
	return " ";
	char ch=s[0];
	int ans=s.substr(1);
	if(ch=="x")
	return ans+ch;
	return ch+ans;
}
int main(){
	move("xmasxtree");
	return 0;
}
