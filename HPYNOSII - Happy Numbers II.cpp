#include <iostream>
#include <math.h>
#include <map>
#include <bits/stdc++.h>
using namespace std;




int main() {
	int t;

	cin>>t;
	while(t--){
		 int n,rem,flag=0;
		int count=0;
		map < int, int> dup;
		
		scanf("%d",&n);
		while(n!=1){
			int sum=0;
			while(n>0){
			sum+=(n%10)*(n%10);
			n=n/10;
			}
			//cout<<sum<<endl;
			n=sum;
		
			if(dup.find(n)==dup.end()){
				++count;
				dup[n]++;
			}
			else{
				cout<<-1<<endl;
				flag=1;
				break;
			}
			
		}
		if(flag==0)
		cout<<count<<endl;
		
		
		
	}
	return 0;
}