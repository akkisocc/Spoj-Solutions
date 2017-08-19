#include <iostream>
#include <list>
#include <limits.h>
using namespace std;

int main() {
	int t,n1,n2,ele;
	cin>>t;
	while(t--){
		cin>>n1;
		list <int> list1,list2;
		int flag=0;
		for(int i=0;i<n1;++i){
			cin>>ele;
			list1.push_back(ele);
		}
		cin>>n2;
		for(int i=0;i<n2;++i){
			cin>>ele;
			list2.push_back(ele);
		}
		list1.sort();
		list2.sort();
		list <int> ::iterator it1,it2;
		it1=list1.begin(),it2=list2.begin();
		int curdiff,diff;
		curdiff=diff=INT_MAX;
		while(it1!=list1.end() && it2!=list2.end()){
			
			if(*it1>*it2){
				curdiff=(*it1)-(*it2);
				if(curdiff<diff){
					diff=curdiff;
				}
				++it2;
			}
			else if(*it1<*it2){
				curdiff=(*it2)-(*it1);
				if(curdiff<diff){
					diff=curdiff;
				}
				++it1;
			}
			else{
				cout<<0<<endl;
				flag=1;
				break;
			}
			
		}
		if(flag==0){
			cout<<diff<<endl;
		}
		
		
		
	}
	return 0;
}