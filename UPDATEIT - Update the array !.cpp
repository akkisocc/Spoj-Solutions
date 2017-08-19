#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,u;
		cin>>n>>u;
		int a[n];
		for(int i=0;i<n;++i)
			a[i]=0;
		int l,r,val;
		for(int i=0;i<u;++i){
			scanf("%d%d%d",&l,&r,&val);
			a[l]+=val;
			a[r+1]-=val;
		}
		//prefix sum
		for(int i=1;i<n;++i)
			a[i]=a[i]+a[i-1];
		int q,index;
		cin>>q;
		while(q--){
			cin>>index;
			cout<<a[index]<<endl;
		}
	}
	return 0;
}