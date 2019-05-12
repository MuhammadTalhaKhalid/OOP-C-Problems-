#include<iostream>
#include<stdio.h>
#include <unistd.h>
#include<cstdlib>
using namespace std;

class Data {
private:

public:
	int a;
operator > (Data &dd1) {

	return a>dd1.a;
}

void Get() {
cout<<"Enter number: ";	
cin>>a;

}	

void show() {
cout<<a<<"\t";	
}

};
int main() {
Data d1,d2,temp;
d1.Get();
d2.Get();
cout<<"Data 1\n\n";
d1.show();
d2.show();
cout<<"\n\nSorting\n\n";
if(d1>d2) {
temp=d1;
d1=d2;
d2=temp;
	
}

d1.show();
d2.show();
return 0;	
}
