#include <bits/stdc++.h>
using namespace std;
bool G34();
int main(){
	bool a=G34();
	if(a==true){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	return 0;
}
bool G34(){
	srand((int)time(0));
	int num1=(rand()%10000)+1;
	int num2=(rand()%10000)+1;//0��10000����� 
	int symbol=rand()%4;// 0����+��1����-��2����*��3����/ 
	int result;
	if(symbol==0){
		result=num1+num2;
		cout<<num1<<"+"<<num2<<"=?"<<endl;
	}else if(symbol==1){
		result=num1-num2;
		cout<<num1<<"-"<<num2<<"=?"<<endl;
	}else if(symbol==2){
		result=num1*num2;
		cout<<num1<<"��"<<num2<<"=?"<<endl;
	}else{
		result=num1/num2;
		cout<<num1<<"��"<<num2<<"=?"<<endl;
	}
	double input;
	cin>>input;
	if(input==result){
		return true;
	}else{
		return false;
	}
}

