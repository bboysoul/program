#include <iostream>
#include <cstdlib.h>
using namespace std;

int main()
{
	unsigned int seed;
	cout <<"请输入种子";
	cin>>seed;
	cout<<myrand(seed)<<endl;
	return 0;
}
