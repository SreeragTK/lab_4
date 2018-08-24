//include libray
#include<iostream>
using namespace std;
//define main function
int main(){
double a,b,c,d,e;
//define variables
cout<<"Enter your marks for each subjects (max mark=20)\n"<<"PHYSICS=\n";cin>>a;
cout<<"MATHS=\n";cin>>b;
cout<<"CHEMISTRY=\n";cin>>c;
cout<<"BIOLOGY=\n";cin>>d;
cout<<"ENGLISH=\n";cin>>e;
//calculation
cout<<"your total mark="<<a+b+c+d+e;"\n";
cout<<"your percentage of marks="<<(a+b+c+d+e);
return 0;
}
