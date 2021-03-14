//WAP using recursive function to calculate the factorial of a given number.
// Also draw the recursion tree for the test values taken in the program

#include<iostream>
using namespace std;
char in;
int factorial(int x){
	if(x>0){
		return x*factorial(x-1);
			}
	 else if (x=0)
	return 1;
	
	else{
		return in ;
	}		
	
}

int main(){
     int n;
     cout<<"enter a positive number"<<" ";
     cin>>n;
     cout <<"Factorial of"<<" "<<n<<" "<<"is"<<" "<<factorial(n)<<endl;
     
     return 0;
}


