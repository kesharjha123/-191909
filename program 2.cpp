//program to make use inline function

#include<iostream>
#include<math.h>
using namespace std;
void display(double m , int n);

inline double power(double m , int n=2){
	return pow (m,n);
}
 
int main(){
double m;
int n;

cout<<"enter the number"<<" ";
cin>>m;
cout<<"enter the power"<<" ";
cin>>n;
display(m,n);
 return 0;
	
}

 void display(double m , int n){
	
	cout<<"result with default power is"<<" "<<power(m)<<endl;

	cout<<"result with power"<<" "<<n<<" "<<"is"<<" "<<power(m,n)<<endl;
}
