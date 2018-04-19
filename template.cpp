#include<iostream>
using namespace std;
template<class T>
T mymin(T a,T b){
	return ((a<b)?a:b);
}
int main(){
	int i=10,j=20;
	cout<<endl<<mymin(i,j);
	float a=3.1,b=5.7;
	cout<<endl<<mymin(a,b);
}