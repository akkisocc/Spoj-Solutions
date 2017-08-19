#include <iostream>
#include <map>
using namespace std;

int main() {
	int t,n,ele;
	cin>>t;
	while(t--){
		scanf("%d",&n);
		int half=n/2,flag=0;
		map <int,int> dup;
		for(int i=0;i<n;++i){
			scanf("%d",&ele);
			dup[ele]++;
		}
		map<int,int>::iterator it;
		for(it=dup.begin();it!=dup.end();++it){
			if(it->second>half){
				cout<<"YES "<<it->first<<endl;
				flag=1;
			}
		}
		if(flag==0)
		cout<<"NO"<<endl;
	}
	return 0;
}