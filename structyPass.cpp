#include<iostream>
#include<string>
using namespace std;

struct speaker 
	{
	string name;
	double price;
	};
void setValues (speaker );
void setValues2(speaker &);
void setValues3(speaker *);

int main()
	{
	speaker s1 = { "ABC_Brand" , 10000 } ;
	setValues (s1);
	setValues2 (s1);
	setValues3 (&s1);
	}

void setValues (speaker s2) // new struct objecte created similar to s1 and named as s2
	{
	cout<<"pass_value_name: "<<s2.name<<endl;
	cout<<"pass_value_price: "<<s2.price<<endl;
	}

void setValues2 (speaker &s3)// another name given as s3 for the object s2 dats all , no address is passed here, same address printed here
	{
	cout<<"pass_ref_name: "<<s3.name<<endl;
	cout<<"pass_ref_price: "<<s3.price<<endl;
	}
void setValues3 (speaker *s4) {
// address of the same s1 object is passed and 
	cout<<"pass_address_name: "<<s4->name<<endl;
	cout<<"pass_address_price: "<<s4->price<<endl;
}
	 

	
	
