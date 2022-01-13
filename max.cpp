#include<iostream>
using namespace std;
int main(){
	int max=0,min=0,key;
	int a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	for(int i=0;i<5;i++){
		if(max<a[i]){
			max=a[i];
			
		}
		
	}
	cout<<max<<endl;
}
