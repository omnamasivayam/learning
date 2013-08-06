#include<iostream>
using namespace std;

int getInput(int[],int);
int i,j;
int main()
{
int omarr[10];
int sz_arr= sizeof(omarr);
int sz_int=sizeof(int);
int sz;
sz = (sz_arr/sz_int);

int totalInput;

totalInput = getInput(omarr, sz);
if (totalInput==0)
{
cout<<"no values was entered\n";
}
else
{
cout<<"entered array value are\n";
for(i=0; i<totalInput; i++)
	{
	cout<<omarr[i]<<endl;
	}

}
return 0;
}

int getInput (int b[], int siz)
{
cout<<"Please enter the input to array\n";
for(i=0; i<siz;i++)
{
int c;
if((cin>>b[i])==0)
	{
	cout<<"the value you entered is not valid , please enter an integer\n";
	cin.clear();
	
	while((c=cin.get()) != '\n')
	{
	}

	i--;
	}
}

return (i);
}


