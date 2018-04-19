#include <iostream>
using namespace std;
class op{
int x,y;
public:
	op(){}
op(int a,int b){
	x=a;
	y=b;
}
friend op operator+(op ob1, op ob2);
void show(){
	cout<<"x = "<<x<<endl<<"y= "<<y<<endl;
}
};

op operator+(op ob1, op ob2){
op temp;
temp.x=ob1.x+ob2.x;
temp.y=ob1.y+ob2.y;
return temp;
}

int main(){
op o1(10,10),o2(20,20);
op o3=o1+o2;
o3.show();
	return 0;
}