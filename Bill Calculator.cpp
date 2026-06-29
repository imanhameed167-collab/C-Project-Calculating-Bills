#include<iostream>
using namespace std;
int main(){
	int units, TV, paper,fcharge;
	float bill;
	float discount;
	cout<<"enter electricity bills units:";
	cin>>units;
    cout<<"enter TV Fee:";
	cin>>TV;
	cout<<"enter paper fund:";
	cin>>paper;
	cout<<"enter fix charges:";
	cin>>fcharge;
	//bill=units*50;
	if(units>500){
	bill=units*50;
	}
	else if(units>=300)	{
	bill=units*35;}
	
	else{
	bill=units*20;
}
	
	bill=bill+(TV+paper+fcharge);
	cout<<"total bill="<<bill<<endl;
	if(bill<1500){
		discount=bill-1500/100;
		cout<<"you get discount!"<<discount<<endl;
	}
	
	return 0;
	
}

