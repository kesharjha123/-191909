//Write a class ACCOUNT that represents your bank account  and then use it .
//The class should allow you to deposit money, withdraw money, calculate interest, send you a message if you have insufficient balance.
#include<iostream>
#include<math.h>
using namespace std;

class account {
    private :
        double amount;

    public :
        double deposit(double money){
            if(money>0){
                amount = amount + money;
                cout<<"Amount succesfully saved\n\n\n";
            }
            else{
                cout << "Invalid Input" << endl;
            }
        }
        void totalamount(){
            cout<<"Your Current balance is "<<amount<<"\n\n";
        }
        void withdraw(double withdrawanmount){
            if(amount>=withdrawanmount){
                amount = amount - withdrawanmount;
                cout<<"The Transaction has been Successfull\n";
            }
            else{
                cout<<"Insufficient Amount in Account "<<amount<<".\n";
            }
        }
        void interest(double time,double rate){
            double z = 1 + rate/100;
            double Interest = amount * pow(z,time);
            cout<<"Calculated Interest is "<<Interest<<"\n\n\n";
        }

};

int main(){
    account acc;
    int choice;
    long int AccountNo;
    cout<<"Enter the account no(in 7 digits). ";
    cin>>AccountNo;
    if(AccountNo>0 && AccountNo<9999999)
        while(1){
            cout<<"1.Deposite Money\n2.Check Balance\n3.Withdraw Money\n4.Calculate Interest\n5.Exit\n";
            cout<<"Enter the choice \n";
            cin>>choice;
        
        
            switch(choice){
                case 1:
                        cout<<"Enter the amount \n";
                        double amnt;
                        cin>>amnt;
                        acc.deposit(amnt);
                        break;
                case 2:
                        acc.totalamount();
                        break;
                case 3:
                        cout<<"Enter the amount to be withdrawn: ";
                        double amntt;
                        cin>>amntt;
                        acc.withdraw(amntt);
                        acc.totalamount();
                        break;
                case 4:
                        cout<<"Enter the rate and time(in year) : \n";
                        double rate,principal,year;
                        cin>>rate>>year;
                        acc.interest(year,rate);
                        break;
                case 5:
                        return(0);
                default:
                        exit;
        
            }
            
        }
}
