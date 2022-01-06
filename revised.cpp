// Code for Project 1

// Program to calculate VIF value

#include <iostream>

int main()

{

    float r, r_square, test;  

std::cout << "what is the value for r ?\n";

std::cin >> r;   

    r_square = r * r;

    std::cout << "r-squared = " << r_square << std::endl;

   

    int vif = 1 / (1 - r_square);

    std::cout << "vif = " << vif << std::endl;

 

    test = 1 - vif;

    std::cout << "test = " << test << std::endl;   

  

    if (vif > 1)

    {

        std::cout << "vif is greater than 1";

    }

    else

    {

        std::cout << "vif is less than 1";

    }

              return 0;

}

