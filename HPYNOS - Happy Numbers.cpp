#include <iostream>
#include <map>
using namespace std;

int main() {
	map <int,bool> element;
	int n,temp,count=0,n1;
	cin>>n;
	while(n!=1){
		temp=0;
		while(n>0){
			temp+=(n%10)*(n%10);
			n=n/10;
		}
		count++;
		n=temp;
		if(element.count(n)){
			cout<<-1;
			return 0;
		}
		element.insert(pair <int,bool>(n,true));
		
	}
		cout<<count;

	return 0;
}