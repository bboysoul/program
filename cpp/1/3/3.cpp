#include <iostream>
using namespace std;

namespace A
{
	int x=1;
	void fun()
	{
		cout<<"A"<<endl;
	}
}
namespace B
{
	int y=2;
	void fun()
	{
		cout<<"B"<<endl;
	}
	void fun2()
	{
		cout<<"2B"<<endl;
	}
}
using namespace B;
int main()
{
	cout<<A::x<<endl;
	B::fun();
	fun2();
	return 0;
}
