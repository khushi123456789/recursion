#include<iostream>
#include<bits/stdc++>
using namespae std;
int move(string s){
	if(s.length()==0)
	return " ";
	int ch=s[0];
	int ans=move(s.substr(1));
	if(ch==ans[0])
       return ans;
       else
        return ans+ch; 	
}
int main(){
	move("xmasxtree");
	return 0;
}
