#include <iostream>
#include <list>
#include <stdlib.h>
using namespace std;

void dfs(int node,int count[],list <int> *adj){
		count[node]++;
		if(count[node]>1){
		
			cout<<"yes"<<endl;
			exit(0);
	
			
		}
		list <int> :: iterator i;
		
		for(i=adj[node].begin();i!=adj[node].end();++i){
			//	cout<<node<<"->"<<*i<<endl;
				dfs(*i,count,adj);
		}
	
}



void dfsUtil(int node,int n,list <int> *adj){
		
		int count[n+1];
		for(int i=1;i<=n;++i)
			count[i]=0;
			//list <int> ::iterator i;
			//	for(i=adj[2].begin();i!=adj[2].end();++i)
			//	cout<<2<<"->"<<*i<<endl;
		dfs(node,count,adj);
	
}

int main() {
	int n,m,a,b,t;
	cin>>t;
	while(t--){
	cin>>n>>m;
	list <int> *adj= new list<int>[n+1];
	for(int i=1;i<=m;++i){
	
		cin>>a>>b;
		adj[a].push_back(b);
	}
	list <int> ::iterator i;
//	for(int v=1;v<=m;v++)
//	for(i=adj[v].begin();i!=adj[v].end();++i)
//		cout<<v<<"->"<<*i<<endl;
	for(int i=1;i<=n;++i){
		
		dfsUtil(i,n,adj);
	}
	
		cout<<"no"<<endl;
	}
	return 0;
}