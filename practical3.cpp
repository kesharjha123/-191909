//Write a function power() which raise a number m to a power n . The function takes double value of m and integer value of n and returns result .
//Use default value of n is 2 to make the function to calculate squares when this argument is omitted.

#include<iostream>
#include<math.h>
using namespace std;

double power(double m , int n=2){
	return pow (m,n);
}

int main(){
double m, res;
int n;

cout<<"enter the number"<<" ";
cin>>m;
cout<<"enter the power"<<" ";
cin>>n;

if (n==0){
	
	res=power(m);
	cout<<"result is"<<" "<<res<<endl;
}
else{
	
	res = power(m,n);
	cout<<"result is"<<" "<<res<<endl;
}
 return 0;
	
}
