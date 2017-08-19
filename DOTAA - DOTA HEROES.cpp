#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t,n,m,d;
	cin>>t;
	while(t--){
		cin>>n>>m>>d;
		int a[n],flag=0;
		for(int i=0;i<n;++i)
			cin>>a[i];
		sort(a,a+n,greater<int>());
		int i=0;
		while(m>0){
				if(a[i]<=d){
				cout<<"NO"<<endl;
				flag=1;
				break;
				}
			while(a[i]-d>0){
				a[i]=a[i]-d;
				m--;
			}
			i++;
		
			
			
		}
		if(flag==0){
			cout<<"YES"<<endl;
		}
		
		
		
		
	}
	return 0;
}