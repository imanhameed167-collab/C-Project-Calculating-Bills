#include<iostream>
using namespace std;
int main(){
	//M=METER
	int units, TV, paper,Mcharge;
	float F_P_adjustment,FC_surcharge,electricity_duty,R_S_tax,ED_on_FPA;
	float bill;
	float discount;
	cout<<"enter electricity bills units:";
	cin>>units;
    cout<<"enter TV Fee:";
	cin>>TV;
	cout<<"enter paper fund:";
	cin>>paper;
	cout<<"enter meter charges:";
	cin>>Mcharge;
	cout<<"enter fuel price adjustment:";
	cin>>F_P_adjustment;
	cout<<"enter F.C surcharge:";
	cin>>FC_surcharge;
	cout<<"enter electricity duty charge:";
	cin>>electricity_duty;
    cout<<"enter R_S_tax:";
    cin>>R_S_tax;
    cout<<"enter ED on FPA:";
    cin>>ED_on_FPA;
	
	//bill=units*50;
	if(units>500){
	bill=units*50;
	}
	else if(units>=300)	{
	bill=units*35;}
	
	else{
	bill=units*20;
}
	
	bill=bill+(TV+paper+Mcharge+F_P_adjustment+FC_surcharge+electricity_duty+R_S_tax+ED_on_FPA);
	cout<<"total bill="<<bill<<endl;
	if(bill<2500){
		discount=bill-1500/100;
		cout<<"you get discount!"<<discount<<endl;
	}
	
	return 0;
}
