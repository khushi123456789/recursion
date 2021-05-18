#include<iostream>

using namespae std;
int move(string s){
	if(s.length()==0)
	return ;
if(s[0]=="p"&&s[1]=="i"){
cout<<"3.14";
move(s.substr(2));
}
else{
cout<<s[0];
move(s.substr(1));
}
}
int main(){
	move("xmasxtree");
	return 0;
}
