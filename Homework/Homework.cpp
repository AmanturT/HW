



#include <iostream>
#include <time.h>
#include <cmath>





const int n = 3;

int arr[n][n] = {};

int total = 0;
void second() {
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);
	int day = buf.tm_mday;
	int remainder = ceil(day / n);
	for (int j = 0; j < n; j++)
	{
		total = total + arr[remainder][j];
	    
	}
	std::cout << total;
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
