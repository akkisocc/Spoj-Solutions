#include <iostream>
using namespace std;

void printTerm(int n){
	int i=1,count,temp,j=1;
	while(1){
		if(n<=((i*(i+1))/2)){
			break;
		}
		i++;
		j++;
	}
	temp=i-1;
	count=(temp*(temp+1))/2;
	++count;
	if(i%2!=0){
		j=1;
		while(count!=n){
			i--;
			j++;
			count++;
		}
	}
	else{
		i=1;
		while(count!=n){
		j--;
		i++;
		count++;
		}
	}
	cout<<"TERM "<<n<<" "<<"IS"<<" "<<i<<"/"<<j<<endl;
	
	
}

int main() {
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
	printTerm(n);
	}
	return 0;
}