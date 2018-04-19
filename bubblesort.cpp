#include<iostream>
# define max 100
using namespace std;
void bsort(int a[],int range){
	int temp;
for(int i=0;i<range;i++){

	for(int j=0;j<range-i-1;j++){
		if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
cout<<"Sorted array\n";
for (int i=0;i<range;i++){
	cout<<a[i]<<endl;
}
}
int main(){
int n,a[max];
cout<<"print enter range\n";
cin>>n;
cout<<"enter array\n";
for(int i=0;i<n;i++){
	cin>>a[i];
}
bsort(a,n);
}