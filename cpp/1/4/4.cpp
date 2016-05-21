#include <iostream>
#include <stdlib.h>
using namespace std;
namespace mynum
{
	int x=104;
}
int main()
{
	bool isflag=false;
	if(mynum::x%2==0)
	{
		isflag=false;
	}
	else
	{
		isflag=true;
	}
	if(isflag==true)
	{
		cout<<"jishu"<<endl;
	}
	else
	{
		cout<<"oushu"<<endl;
	}
	return 0;
}
