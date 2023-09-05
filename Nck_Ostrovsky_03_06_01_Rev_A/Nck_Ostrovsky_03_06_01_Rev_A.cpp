
#include <iostream>
#include "header.h"


    int main()
    {



     
        double n = 0, m = 0;
        while (1) {
            //  std::cout << "\n\t num1  " << calc.get_num1();
            //  std::cout << "\n\t num2  " << calc.get_num2();

            while (n == 0) {
                std::cout << "\n Please, enter num1:\t";
                std::cin >> n;
                if (n == 0)
                {
                    std::cout << "Without Zero values, please!\n";
                }
            }
            while (m == 0) {
                std::cout << "\n Please, enter num2:\t";
                std::cin >> m;
                if (m == 0)
                {
                    std::cout << "Without Zero values, please!\n";
                }
            }
            // std::cout << "\n Please, enter num2:\t";
            // std::cin >> m;
            if ((set_num1(n) == 1) && (set_num2(m) == 1))
            {
                std::cout << "\n num1 + num2 =" << add() << std::endl;
                std::cout << "\n num1 * num2 =" << multiply() << std::endl;
                std::cout << "\n num1 - num2 =" << substruct_1_2() << std::endl;
                std::cout << "\n num2 - num1 =" << substruct_2_1() << std::endl;
                std::cout << "\n num1 / num2 =" << divide_1_2() << std::endl;
                std::cout << "\n num2 / num1 =" << divide_2_1() << std::endl;
                n = 0;
                m = 0;
            }
            // else
           //  {
            //     std::cout << "Without Zero values, please!\n";

            // }
            // std::cout << "\n\t num1  " << calc.get_num1();
            // std::cout << "\n\t num2  " << calc.get_num2();
        }
        return (0);

}

