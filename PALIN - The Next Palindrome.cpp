#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=n+1;;i++){
			int temp1=i,temp2=i,rem=0,rev=0;
			while(temp1>0){
				rem=temp1%10;
				rev=rev*10+rem;
				//cout<<rev<<endl;
				temp1/=10;
			}
			if(rev==temp2){
				cout<<rev<<endl;
				break;
			}
		}
		
		
		
		
		
	}
	return 0;
}