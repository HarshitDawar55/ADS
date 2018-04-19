//insertion sort
#include<iostream>
using namespace std;
void isort(int *a,int range){
	int j,k;
	
	for(int z=1;z<range;z++){
		j=z-1;
		k=a[z];
		while(j>=0&&a[j]>k){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=k;
	}
	cout<<"sorted array is:- "<<endl;
	for(int v=0;v<range;v++){
		cout<<a[v]<<"\t";
	}
	cout<<endl;
}
int main(){
	int a[50],range;
	cout<<"Enter range"<<endl;
	cin>>range;
	cout<<"Enter array to be sorted"<<endl;
	for(int i=0;i<range;i++){
		cin>>a[i];
	}
	isort(a,range);
	return 0;
}