

#include <iostream>

void FindOddNumbers(int Limit, bool IsOdd)
{
    if (IsOdd == true) {
        for (int i = 0; i <= Limit; i += 2)
        {
            std::cout << i << std::endl;
        }
    }
    else
    {
        for (int i = 2; i <= Limit; i += 2)
        {
            std::cout << i - 1 << std::endl;
        }
    }
}


int main()
{
    /*int number = 17; Первый пункт

    for(int i = 0; i <= number; i += 2)
    {    
        std::cout << i;
    } 
   */
  
    FindOddNumbers(27, false);
}
