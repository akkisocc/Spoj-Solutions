#include <iostream>
#include <map>
using namespace std;

int main() {
	int n,m,ele;
	map <int,int> dup;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i]>>m;
	//	cout<<a[i]<<"->";
		for(int j=0;j<m;++j){
			cin>>ele;
			dup[ele]++;
		}
	}
	map <int,int>::iterator it;
	for(int i=0;i<n;++i){
		it=dup.find(a[i]);
		if(it!=dup.end())
		dup.erase(it);
	}
	cout<<dup.size()<<endl;
	return 0;
}