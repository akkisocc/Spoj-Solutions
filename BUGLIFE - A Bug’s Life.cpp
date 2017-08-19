#include <iostream>
#include <list>
using namespace std;

bool dfs(int node,list<long int> *adj,bool v[],int parent){
	v[node]=true;

	list<long int>::iterator it;
	
	for(it=adj[node].begin();it!=adj[node].end();++it){
			if(!v[*it]){
				if(dfs(*it,adj,v,node)){
					true;
				}
			}
			else if(*it!=parent)
			return true;
	}
	return false;
	
	
}

bool dfsUtil(int node,list<long int> *adj,int b){
		
		bool v[b+1];
		for(int i=1;i<=b;++i){
			v[i]=false;
		}
			if(dfs(node,adj,v,-1))
				return true;
			return false;
			
	
}


int main() {
	int t;
	int eve=1;
	cin>>t;
	while(t--){
		long int b,in,flag=0;
		cin>>b>>in;
		int m,n;
		cout<<"Scenario #"<<eve++<<":"<<endl;
		list <long int> *adj=new list<long int>[b+1];
		for(int i=1;i<=in;++i){
			cin>>m>>n;
			adj[m].push_back(n);
			adj[n].push_back(m);
		}
		for(int i=1;i<=b;++i){
			if(dfsUtil(i,adj,b)){
				cout<<"Suspicious bugs found!"<<endl;
				flag=1;
				break;
			}
			
		}	
		if(flag==0){
			cout<<"No suspicious bugs found!"<<endl;
		}

	}
	return 0;
}