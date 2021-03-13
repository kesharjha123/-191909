//WAP using recursive function to calculate the factorial of a given number.
// Also draw the recursion tree for the test values taken in the program

#include<iostream>
using namespace std;

int fact(int x){
	if(x>1){
		return x*fact(x-1);
			}
	 else 
	return 1;		
	
}

int main(){
     int n;
     cout<<"enter a positive number"<<" ";
     cin>>n;
     cout <<"Factorial of"<<" "<<n<<" "<<"is"<<" "<<fact(n)<<endl;
     
     return 0;
}


