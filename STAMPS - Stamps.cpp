#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long int stamp;
	int t,event=0,n;
	cin>>t;
	while(t--){
		cin>>stamp>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
			sort(a,a+n);
			int count=0,sum=0,temp=n-1,flag=0;
			cout<<"Scenario #"<<++event<<":"<<endl;
			while(sum<stamp){
				if(temp==-1){
					cout<<"impossible"<<endl;
					flag=1;
				}
				sum+=a[temp];
				temp--;
				count++;
			}
			if(flag==0)
			cout<<count<<endl;
	}
	return 0;
}