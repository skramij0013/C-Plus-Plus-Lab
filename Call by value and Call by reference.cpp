#include<iostream>
using namespace std;
void callbyvalue(int a){
	a=a+10;
	cout<<"Inside call by value :"<<a<<endl;
}
void callbyreference(int&a){
	a=a+10;
	cout<<"Inside call by reference :"<<a<<endl;
}
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Before Call by Value :"<<n<<endl;
	callbyvalue(n);
	cout<<"After Call by Value :"<<n<<endl;
	cout<<endl;
	cout<<"Before Call by Reference :"<<n<<endl;
	callbyreference(n);
	cout<<"After Call by Reference :"<<n<<endl;
	return 0;
}
