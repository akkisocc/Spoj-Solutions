#include <iostream>
#include<algorithm>
using namespace std;
int findSecond(int *a,int n){
	int secSmallest=999,smallest=999;
	for(int i=0;i<n;i++){
		secSmallest=smallest;
		if(smallest>a[i]){
			
			smallest=a[i];
		}
			
	}

	return secSmallest;
	
}
int main() {
	int a[10000],d[10000];
	int i,secSmallest,na,nd,flag=0;
	while(1){
		flag=0;
		cin>>na;
		cin>>nd;
		if(na==0 &&nd==0)
		break;
		for(i=0;i<na;i++)
		cin>>a[i];
		for(i=0;i<nd;i++)
		cin>>d[i];
		sort(d,d+nd);
		
		for(i=0;i<na;i++){
			if(d[1]>a[i]){
				flag=1;
				cout<<"Y"<<endl;
				break;
			}
		}
		if(flag==0){
			cout<<"N"<<endl;
		}
	}

	return 0;
}