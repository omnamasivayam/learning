#include<iostream>
#include<iomanip> // for using the set precison in cout , ip op formatiing
using namespace std; 

double simpleIntrest(double, double , int);
double compoundIntrest(double, double , int);

int main()
{

double Amt = 1000000;
double SI = 8;
double CI = 6;
int year = 1;
double SI_amount;
SI_amount = (simpleIntrest(Amt,SI,year));
double CI_amount;
CI_amount = (compoundIntrest(Amt,CI,year));

while (SI_amount >= CI_amount)
	{
	year++; 
	SI_amount = (simpleIntrest(Amt,SI,year));
	CI_amount = (compoundIntrest(Amt,CI,year));
	cout<<fixed<<setprecision(2)<<"SI_amount="<<SI_amount<<" and CI amount="<<CI_amount<<endl;

	}

cout<<"at the year" <<year<<", the Compound intrest amount will be greater than or equal the Simple intrest amont\n";
return 0;

}

double simpleIntrest(double Amunt, double Intrest, int Years)
{
double RateOfInt = (Intrest/100);
double final =(Amunt+ (Amunt * RateOfInt * Years));
return (final);
} 	

double compoundIntrest(double Amunt, double Intrest, int Years)
{
//int Basic = Amut;
int i;
double RateOfInt = (Intrest/100);
for ( i = 0; i < Years ; i ++)
	{
	Amunt = Amunt + (Amunt * RateOfInt);
	}

return (Amunt);
}








