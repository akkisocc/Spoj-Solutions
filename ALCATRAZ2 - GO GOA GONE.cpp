#include <iostream>
using namespace std;

int main() {
	long long int a[9],n,a1,b1,sum=0;
	for(int i=1;i<9;++i){
		cin>>a[i];	
	}
	cin>>n;
	while(n--){
		cin>>a1>>b1;
		if(a[a1]>a[b1])a[b1]=0;
		else a[a1]=0;
	}
	for(int i=1;i<9;++i){
		sum+=a[i];
	}
	cout<<sum;
	return 0;
}