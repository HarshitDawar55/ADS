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
op operator+(op obj){
	op temp;
	temp.x=this->x + obj.x;
	temp.y=this->y + obj.y;
	return temp;
}
void show(){
	cout<<"x = "<<x<<endl<<"y= "<<y<<endl;
}
};

int main(){
op o1(10,10),o2(20,20);
op o3=o1+o2;
o3.show();
	return 0;
}