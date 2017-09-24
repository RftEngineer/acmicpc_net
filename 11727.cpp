#include <iostream>
#include <algorithm>
int main(void)
{
	int arr[1000] = {1,1, };
	std::fill(arr+2, arr+999, 0);
	int n = 0;
	std::cin>>n;
	
	for(int i = 2; i <= n; i++)
	{
		arr[i] = (arr[i-1] + (2*arr[i-2]))%10007;
	}
	
	std::cout<<arr[n]<<std::endl;
	
	return 0;
}