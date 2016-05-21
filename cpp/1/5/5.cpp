#include <iostream>
using namespace std;
namespace A
{
	int max_or_min(int *arr,int count,bool is_max)
	{
		int temp=arr[0];
		for(int i =1;i<count;i++)
		{
			if(is_max==true)
			{
				if(temp<arr[i])
				{
					temp=arr[i];
				}
			}
			else
			{
				if(temp>arr[i])
				{
					temp=arr[i];
				}
			}
		}
		return temp;
	}
}
int main()
{
	int arr1[4]={3,5,1,7};
	bool is_max=false;
	cin >> is_max;
	cout << A:: max_or_min(arr1,4,is_max) << endl;
	return 0;
}
