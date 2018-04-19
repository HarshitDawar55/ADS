#include<iostream>
#include<fstream>

using namespace std;
int main(){

fstream fi,f;
char c[100],c1[1000];
cout<<"Enter the text to be written in file"<<endl;
cin.getline(c,80);
fi.open("/Users/harshitdawar/Desktop/file1.har",ios::app|ios::binary);
fi.write((char*)&c,sizeof(c));
fi.close();
f.open("/Users/harshitdawar/Desktop/file1.har",ios::in|ios::binary);
while(!f.eof()){
f.read((char*)&c1,sizeof(c1));
cout<<c1<<endl;
if(f.eof()){break;}
}
f.close();
	return 0;

}