#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t,ng,nm;
	cin>>t;
	while(t--){
		
		cin>>ng>>nm;
		int a[ng],b[nm];
		for(int i=0;i<ng;++i)
		cin>>a[i];
		for(int i=0;i<nm;++i)
		cin>>b[i];
		int god=*max_element(a,a+ng);
		int mgod=*max_element(b,b+nm);
		if(god>=mgod){
			cout<<"Godzilla"<<endl;
		}
		else{
			cout<<"MechaGodzilla"<<endl;
		}
	}
	return 0;
}