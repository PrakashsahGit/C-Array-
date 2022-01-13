#include<iostream>
using namespace std;
int main(){
	int a[6]={-3,4,5,-6,-8};
	int count=0;
	int negative=0;
	int positive=0;
	for(int i=0;i<6;i++){
		if(a[i]<0){
			negative++;
		}
		else if(a[i]>0){
			positive++;
			
		}
	}
	cout<<"The negative no"<<" "<<negative<<endl<<"Positive no is"<<" "<<positive<<endl;
}
