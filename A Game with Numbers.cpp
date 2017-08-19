#include <iostream>
using namespace std;

int main() {
	int n,tmp;
	cin>>n;
	tmp=n%10;
	
	if(tmp==0){
		cout<<"2";
	}
	else{
		cout<<"1"<<endl;
		cout<<tmp;
	}
	
	return 0;
}