#include<iostream>
using namespace std;

int main(){
	long long int n1,t,n2,res;
	char ch;
	cin>>t;
	while(t--){
		cin>>n1;
		res=n1;
		while(1){
			cin>>ch;
			if(ch=='=')
			break;
			cin>>n2;
			if(ch=='+')
			res+=n2;
			if(ch=='/')
			res/=n2;
			if(ch=='-')
			res-=n2;
			if(ch=='*')
			res*=n2;
		}
		cout<<res<<endl;
	}
	
	return 0;	
}