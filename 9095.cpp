#include <iostream>

int main(void)
{
	int input1 = 0,temp = 0;
	int arr[12] = {1,1,2};
	
	std::cin>>input1;
	
	for(int i = 3; i < 12; i++)
	{
		arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
	}
	
	for(int i = 0; i < input1; i++)
	{
		std::cin>>temp;
		std::cout<<arr[temp]<<std::endl;
	}
	
	return 0;
	
}