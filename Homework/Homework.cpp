



#include <iostream>
#include <time.h>
#include <cmath>





const int n = 3;

int arr[n][n] = {};


void second() {
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);
	int day = buf.tm_mday;
	int remainder = ceil(day / n);
	for (int j = 0; j < n; j++)
	{
		std::cout << arr[remainder][j];
	
	}
}

int main()
{
	
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = i + j;
			
		}
		
	
	}
	second();
	
}
