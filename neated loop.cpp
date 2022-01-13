#include<iostream>
using namespace std;
int main(){
	int i,n,j;
	cout<<"Enter the two number";
	cin>>n;
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			cout<<i<<j<<endl;
		}
		cout<<endl;
	}
}
