#include<iostream>
using namespace std;
int main(){
	int i,n,avg;
	int num[100];
	int sum=0;
	cout<<"Enter the number of elements";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>num[i];
		sum=sum+num[i];
	}
	avg=sum/n;
	cout<<"The avarage of elements are"<<avg;
}
