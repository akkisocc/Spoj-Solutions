#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t,eve=0;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		long long int flag=0,sum=0,maxE=0,energy=0;
		
		for(int i=0;i<n;++i){
	
			if(sum+a[i]<=0){
				flag=1;
				sum+=a[i];
				energy=abs(sum)+1;
			
				if(maxE<energy){
					maxE=energy;
					
				}
					
			}
			else{
				sum+=a[i];
			}
		}
		if(flag==1){
			cout<<"Scenario #"<<++eve<<": "<<maxE<<endl;
		}
		else
			cout<<"Scenario #"<<++eve<<": "<<1<<endl;
		
		
		
		
	}
	return 0;
}