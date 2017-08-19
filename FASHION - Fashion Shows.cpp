#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int m[n],w[n];
		for(int i=0;i<n;++i)
			cin>>m[i];
		for(int i=0;i<n;++i)
			cin>>w[i];
	
		sort(m,m+n);
		sort(w,w+n);
		int sum=0;
		for(int i=0;i<n;++i)
			sum+=m[i]*w[i];
			cout<<sum<<endl;
	}
	return 0;
}