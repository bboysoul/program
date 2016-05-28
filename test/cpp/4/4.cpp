#include <iostream>
using namespace std;

//上财到万达
void road1(int money)
{
	int a;
	int b;
	int c;
	if(money<5)
	{
		b=5-money;
		cout<<"not enough money"<<endl;
		cout<<"enter money"<<"("<<b<<")";
		cin>>c;
		cout<<endl<<"******THANKS******"<<endl<<endl<<endl;
	}
	else
	{
		a=money-5;
		cout<<"back:"<<a<<endl;
	}
}

//上财到火车站
void road2(int money)
{
	int b;
	int a;
	int c;
	if(money<10)
	{
		b=10-money;
		cout<<"not enough money"<<endl;
		cout<<"enter money"<<"("<<b<<")";
		cin>>c;
		cout<<endl<<"******THANKS******"<<endl<<endl<<endl;
	}
	else
	{
		a=money-10;
		cout<<"back:"<<a<<endl;
	}
}
//上财到银泰
void road3(int money)
{
	int b;	
	int a;
	int c;
	if(money<15)
	{
		b=15-money;
		cout<<"not enough money"<<endl;
		cout<<"enter money"<<"("<<b<<")";
		cin>>c;
		cout<<endl<<"******THANKS******"<<endl<<endl<<endl;
	}
	else
	{
		a=money-15;
		cout<<"back:"<<a<<endl;
	}
}
int main()
{
	int money;
	int roadnum;
	while(1)
	{
		cout<<"***********welcome bus stop***********"<<endl;
		cout<<"road 1(上财到万达)"<<endl;
		cout<<"road 2(上财到火车站)"<<endl;
		cout<<"road 3(上财到银泰)"<<endl;
		cout<<"please enter the road num:(1-3)";
		cin>>roadnum;
		cout<<endl;
		cout<<"please enter the money:";
	EOF	cin>>money;
		cout<<endl;
		road1(money);
		
		road2(money);
	
		road3(money);
	}
	return 0;
}
