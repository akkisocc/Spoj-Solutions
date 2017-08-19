#include <iostream>
#include <limits.h>
#include <list>
using namespace std;
int pos;
void dfs(int node,int count,bool vis[],int &maxCount,list <int> *adj){
	vis[node]=true;
	count++;
	list <int> :: iterator i;
	for(i=adj[node].begin();i!=adj[node].end();++i){
		if(!vis[*i]){
				//	cout<<node<<"-> "<<*i<<endl;
					
				//	count++;
				//	cout<<"c "<<count<<endl;
					if(count>=maxCount){
						maxCount=count;
						pos=*i;
					//	cout<<"Max "<<maxCount<<endl;	
					}
						dfs(*i,count,vis,maxCount,adj);
		
		}
	}
	
	
}

void dfsUtil(int node,int n,list <int> *adj,int &maxCount){
	bool vis[n+1];
	int count=0;
		for(int i=1;i<=n;++i)
			vis[i]=false;
		
		dfs(node,count,vis,maxCount,adj);
	
	
}

int main() {
	int n,a,b,maxCount=INT_MIN;;
	cin>>n;
	list <int> *adj=new list <int>[n+1];
	for(int i=1;i<=n-1;++i){
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
	dfsUtil(1,n,adj,maxCount);
	dfsUtil(pos,n,adj,maxCount);
	cout<<maxCount<<endl;
	return 0;
}