#include <iostream>
#include <algorithm>

int main(void)
{
	long long int arr[91][2] = {{0,0},};
	long long int input1 = 0;
	arr[0][0] = 0, arr[0][1] = 0;
	arr[1][0] = 0, arr[1][1] = 1;
	arr[2][0] = 1, arr[2][1] = 0;
	long long int result = 0;
	std::cin>>input1;
	for(int i = 3; i <= input1; i++)
	{
		arr[i][0] = arr[i-1][0] + arr[i-1][1];
		arr[i][1] = arr[i-1][0];
	}
	result = arr[input1][0] + arr[input1][1];
	std::cout<<result<<std::endl;
	return 0;
}
