#include <iostream>
#include <map>
#include <stdlib.h>
using namespace std;

int main() {
	 long long int n;
	map <long long int ,long long int> dup;
	cin>>n;
	while(n>1){
		if(n%2==0){
			if(dup.find(n)==dup.end()){
				dup[n]++;
				n=n/2;
			}
			else{
				cout<<"NIE"<<endl;
				exit(0);
			}
		}
		else{
			if(dup.find(n)==dup.end()){
				dup[n]++;
				n=3*n+3;
			}
			else{
				cout<<"NIE"<<endl;
				exit(0);
			}
		}
		
	}
	cout<<"TAK"<<endl;
	return 0;
}