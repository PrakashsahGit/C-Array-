#include<iostream>
using namespace std;
int main(){
	int a[5],n=5;
	int key;
	cout<<"Enter the elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	
	}
		cout<<"Enter the no. you want to search";
		cin>>key;
		for(int i=0;i<n;i++){
			if(key==a[i]){
				cout<<i;
				return 0;
			}
		}
	cout<<"Not found";
	
}
