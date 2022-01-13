#include<iostream>
using namespace std;
int main(){
	int a[]={1,2,3,4,5,6,14,96,56,76,101,901,501};
	int min=a[0];
	int max=a[0];
	for(int i=0;i<13;i++)
	{
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
