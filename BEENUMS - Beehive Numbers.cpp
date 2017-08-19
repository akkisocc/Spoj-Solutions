#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n,flag;
	while(cin>>n){
		flag=0;
		if(n==-1){
			break;
		}
		int res=0,i=0;
		while(res<n){
			if(i==0){
				res=1;
			}
			else
			res+=6*i;
			i++;
			//cout<<res<<" ";
			if(res==n){
				cout<<"Y"<<endl;
				flag=1;
				break;
			}
		}
		if(!flag )
		cout<<"N"<<endl;
		cout<<endl;
	}
	return 0;
}