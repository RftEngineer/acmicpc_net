#include <iostream>
const int moduler = 1000000000;
int main(void)
{
	int arr[101][10] = {{0,0},};
	int N = 0;
	int result = 0;
	
	std::cin>>N;
	for(int i = 1 ; i < 10; i++)
	{
		arr[0][i] = 0;
		arr[1][i] = 1;
	}
	
	for(int i = 2; i <= N; i++)
	{
		for(int j = 0; j <= 9; j++)
		{
			arr[i][j] = 0;
			if(j-1 >=0) arr[i][j] += arr[i-1][j-1];
			if(j+1 <= 9) arr[i][j] += arr[i-1][j+1];
			arr[i][j] %= moduler;
		}
		
	}
	
	for(int i = 0; i < 10; i++)
	{
		result += arr[N][i];
		result %= moduler;
	}
	
	std::cout<<result<<std::endl;
	return 0;
}