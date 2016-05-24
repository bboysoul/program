#include <iostream>
using namespace std;
int main()
{
	int x=3;
	int &y=x;
	cout << x << endl << y << endl;
	y=20;
	cout << x << endl << y << endl;
	return 0;
}
