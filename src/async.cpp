#include <iostream>
#include <future>

double factorial(unsigned int limit)
{
        double ret = 1;
        for(unsigned int n = 1 ; n <= limit ; ++n)
                ret *= n;
        return ret;
}

int factorial_int(unsigned int limit) 
{
    unsigned ret = 1;
    for(unsigned int n = 1; n <= limit; n++)
        ret *= n;
    return ret;
}

int main()
{
      auto future1 = std::async(factorial, 19);
      auto future2 = std::async(factorial, 12);      
      double result = future1.get() + future2.get();

      auto future3 = std::async(factorial_int, 4);
      std::cout << future3.get() << std::endl;
      
      std::cout<<"Result is: " << result << std::endl;
}
