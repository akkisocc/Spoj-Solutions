#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin>>n){
		if(n==0)
		break;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
			int count=0;
		for(int i=0;i<n;++i)
			if(a[a[i]-1]==i+1)
				count++;
			
	
		if(count==n)
			cout<<"ambiguous"<<endl;
		else
			cout<<"not ambiguous"<<endl;
	}
	return 0;
}