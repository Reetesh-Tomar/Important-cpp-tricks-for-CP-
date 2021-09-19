#include <bits/stdc++.h>
using namespace std;

//Print all permutations of a string

//abc
//^                               
void fun(string s, int n, string tmp, int vis[]){
	//Base case
	if(tmp.size()==n){
		cout<<tmp<<endl;
		return;
	}
	
	for(int  i=0;i<n;++i){
		if(vis[i]==0){
			vis[i]=1;
			tmp+=s[i];
			fun(s, n, tmp, vis);
			tmp.pop_back();
			vis[i]=0;	
		}
	}	
}


int main(){
	string s; cin>>s;
	int n=s.size();
	int vis[n]={0};
	fun(s,  n, "", vis);
	return 0;
}
