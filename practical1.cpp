#include<iostream>
using namespace std;

int a[10][10];
int read_matrix(  int c , int d)
{ 
  for(int i=0;i<c;i++)
 {
 	for (int j=0;j<d;j++){
 		
 		
 		cin>>a[i][j];
 		
	 }
 	
 }	
}


int display_matrix( int e , int f){

	
	for(int i=0;i<e;i++)
 {
 	for (int j=0;j<f;j++){
 		
 		cout<<a[i][j]<<" ";
 		
}
 cout<<endl;
}
	
	
}

int main(){
 
 int m ,n;
 
 cout<<"enter the value of m and n ";
 cin>>m>>n;
 cout<<"enter the elements of matrix";
 read_matrix(m,n);
 
 
 
 cout<<"matrix is ...."<<endl;
 display_matrix(m,n);
 
return 0;
 	
}
