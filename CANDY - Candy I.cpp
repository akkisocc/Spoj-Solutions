#include <iostream>
using namespace std;

int main() {
	int n,sum=0,mean=0,count=0;
while(cin>>n){
	if(n==-1)break;
	int a[n];
	sum=0,mean=0;
	for(int i=0;i<n;++i){
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%n!=0)
		cout<<-1<<endl;
	else{
		count=0,mean=sum/n;
		for(int i=0;i<n;++i){
			if(a[i]>mean)
				count+=a[i]-mean;
		}
		cout<<count<<endl;
	}
}

	return 0;
}