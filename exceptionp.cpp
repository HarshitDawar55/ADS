#include<iostream>
using namespace std;
int main(){
	cout<<"Enter Two number"<<endl;
int a,b,div=1;
cin>>a>>b;
try{
if(b==0){
	throw"error";
}
div=a/b;
cout<<"answer= "<<div<<endl;
}
catch(const char *msg){
	cout<<"Cannot divide by 0"<<endl;
}
return 0;
}