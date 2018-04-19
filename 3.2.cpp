#include<iostream>
#include<cstdio>
#include<string.h>
#include<unistd.h>
using namespace std;
class Shape{
public:
	float l,br,b,h,area;
	Shape(){l=0;b=0;br=0;h=0;area=0;}
	friend void calculate_area();
}S;
class Triangle:public Shape{
public:
		virtual void takedata(){
		cout<<"Enter base of triangle"<<endl;
		cin>>S.b;
		cout<<"Enter height of triangle"<<endl;
		cin>>S.h;
	}
};
class Rectangle:public Shape{
public:
	void takedata(){
		cout<<"Enter length of rectangle"<<endl;
		cin>>S.l;
		cout<<"Enter breadth of rectangle"<<endl;
		cin>>S.br;
	}
};

void calculate_area(int n){
	
if (n==1){
S.area=S.l*S.br;
	cout<<"Area of the Rectangle is:- "<<S.area<<endl;
}
else if(n==2)
{
	S.area=(S.b*S.h)/2;
	cout<<"Area of Triangle is:- "<<S.area<<endl;
}
}
int main(){
	Rectangle R;
	Triangle T;
	char ch;
	do{
		int c;
		cout<<"\t\t\t\t\t\t\tProrgam to calculate Area\n1. Rectangle\n2. Triangle\n3. Exit\nEnter your choice:______";
		cin>>c;
		switch(c){
			case 1: R.takedata();  calculate_area(1); break;
			case 2: T.takedata(); calculate_area(2); break;
			case 3: exit(0); break;
			default: cout<<"Wrong choice\n"; break;
		}
		cout<<"Want to calculate area again\n";
		cin>>ch;
		//cin.getline(ch,80);
		//gets(ch);
		cin.get();
	}while(ch=='y'||ch=='Y');
	return 0;
}
