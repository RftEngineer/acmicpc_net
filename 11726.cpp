#include <iostream>
#include <algorithm>
int main(void)
{
	int arr[1000] = {0,1,2, };
	std::fill(arr+3, arr+999, 0);
	int n = 0;
	std::cin>>n;
	
	for(int i = 3; i <= n; i++)
	{
		arr[i] = (arr[i-1] + arr[i-2])%10007;
	}
	
	std::cout<<arr[n]<<std::endl;
	
	return 0;
}