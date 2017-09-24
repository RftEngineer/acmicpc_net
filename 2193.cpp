#include <iostream>
#include <algorithm>

int main(void)
{
	long long int arr[91] = {0,};
	long long int input1 = 0;
	arr[0] = 1;
	arr[1] = 1; // Beginning from 1
	arr[2] = 1;
	std::cin>>input1;
	for(int i = 3; i <= input1; i++)
	{
		arr[i] = arr[i-1] + arr[i-2];
	}
	
	std::cout<<arr[input1]<<std::endl;
	return 0;
}