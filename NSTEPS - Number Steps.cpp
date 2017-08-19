#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x,y;
	while(t--){
		cin>>x>>y;
		if(x%2==0&&y%2==0)
		cout<<x+y<<endl;
		else if(x%2!=0&&y%2!=0)
		cout<<x+y-1<<endl;
		else if(x!=y || y!=x-2)
		cout<<"No Number"<<endl;
		
	}
	return 0;
}