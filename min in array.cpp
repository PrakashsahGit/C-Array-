#include<iostream>
using namespace std;
int main(){
	int n=6;
	int a[]={2,3,1,4,5,6};
	int max=a[0];
	int min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
		else if(a[i]<min){
			min=a[i];
		}
	}
	cout<<max<<endl;
	cout<<min;
}
