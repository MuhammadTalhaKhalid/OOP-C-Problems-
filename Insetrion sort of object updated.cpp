 #include<iostream>
#include<stdio.h>
#include <unistd.h>
#include<cstdlib>
using namespace std;
class data {
private: 
string name;
int age;
float gpa;
public:

int a;

operator = (const data &dg) {
return a=dg.a,name=dg.name,age=dg.age,gpa=dg.gpa;
}
void input() {
cout<<"Enter id: ";
cin>>a;	
cout<<"Enter name: ";
cin>>name;
cout<<"Enter age: ";
cin>>age;
cout<<"Enter gpa: ";
cin>>gpa;
}	

void show() {
cout<<a<<"\t"<<name<<"\t"<<age<<"\t"<<gpa;
//cout<<a<<endl;
}

operator > (data &d1) {


return a>d1.a;
}	


};

data dd[4];
data key;
int j;

void sorting () {
  for ( int i = 1; i <=3; i++) 
    {  
        key= dd[i];  
		j = i - 1;  
  
        while (j >-1 && dd[j]> key) 
        {  
            dd[j + 1]= dd[j];  
            j = j - 1;  
        }  
        dd[j +1] = key;  
    } 	
}

int main() {

for(int i=0;i<=3;i++) {
dd[i].input();	

}	
sorting();
system("cls");
cout<<"id\tName\tage\tgpa\n\n";
for(int j=0;j<=3;j++) {
dd[j].show();
cout<<endl<<endl;
}
cout<<endl;	

return 0;	

}
 
