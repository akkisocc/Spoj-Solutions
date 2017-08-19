#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,k,s;
	cin>>n>>k>>s;
	int a[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
		
		sort(a,a+n);
	int	sum=0,j=n-1,c=0;
		while(sum<k*s){
			sum+=a[j];
			cout<<sum<<endl;
			j--;
			c++;
		}
		cout<<c;
	return 0;
}