#include <iostream>
using namespace std;

int main() {
	int t,flag=0,event=0;
	long long  int i,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<"Case "<<++event<<": ";
		flag=0;
		for( i=n;i>0;--i){
			if(i%3==0 && (n-i)%5==0 && (n-i)!=0){
				flag=1;
				cout<<i<<endl<<endl;
				break;
			}
		}
		if(flag==0)
		cout<<-1<<endl<<endl;
	}
	return 0;
}