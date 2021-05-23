#include<iostream>
using namespace std;

class Time{
	private:
		int hh;
		int mm;
	public:
		void get_time(int h,int m)
		{
			hh=h;
			mm=m;
		}
		friend void add(Time time1, Time time2);
};

void add(Time time1,Time time2){
	int k1,k2;
	if(time1.mm+time2.mm<=60)
	{
		k1=time1.hh+time2.hh;
		k2=time1.mm+time2.mm;
	}
	else{
		k1=time1.hh+time2.hh+(time1.mm+time2.mm)/60;
		k2=(time1.mm+time2.mm)%60;
	}
	cout<<"add of first and second time= "<<k1<<":"<<k2<<endl;
}

int main(){
	Time time1,time2;

	int ht1,mt1;
	cout<<"enter first time in hour and minute seprate by space "<<endl;
    cin>>ht1>>mt1;
    time1.get_time(ht1,mt1);
    cout<<endl;
    int ht2,mt2;
    cout<<"enter second time in hour and minute seprate by space "<<endl;
    cin>>ht2>>mt2;
    time2.get_time(ht2,mt2);
    cout<<endl<<endl;
    cout<<"------------------------#------------------"<<endl;
    cout<<"first time= "<<ht1<<":"<<mt1<<endl;
    cout<<"second time= "<<ht2<<":"<<mt2<<endl<<endl;
    add(time1,time2);
    
    
}
