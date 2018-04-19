#include<iostream>
using namespace std;
class oxygen{
	int o;
	public: oxygen(){
		o=0;
	}
	int getdata(){
		cout<<"Enter moles of oxygen"<<endl;
		cin>>o; 
		return o;
	}
};
class hydrogen:public oxygen{
int h;
public:hydrogen(){
	h=0;
}
int getdata(){
	cout<<"Enter moles of hydrogen"<<endl;
	cin>>h;
return h;
}
};
class sulphur:public hydrogen{
int s;
public: sulphur(){
	s=0;
}
 int getdata(){
cout<<"Enter moles of sulphur"<<endl;
cin>>s;
return s;
}
};
int main(){
	int m=0,m1=0,m2=0;
	oxygen O;
	hydrogen H;
	sulphur S;
	m=O.getdata();
	m1=H.getdata();
	m2=S.getdata();
	cout<<"Compound formed is:- "<<"H"<<m1<<"O"<<m<<"S"<<m2<<endl;
	return 0;
}