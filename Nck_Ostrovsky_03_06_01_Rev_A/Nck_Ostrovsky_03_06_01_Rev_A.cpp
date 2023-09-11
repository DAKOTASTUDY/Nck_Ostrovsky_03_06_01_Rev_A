
#include <iostream>
#include <typeinfo>
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
                int choice = -1;
                while (((choice < 1) || (choice > 5))) {
                    std::cout << "\n" << "Please, choose required operation (1 - addition, 2 - substraction, 3 - multiplication, 4 - division, 5 - exponentiation) " << std::endl;
                   
                    std::cin >> choice;
                    //  я не совсем понял как отфильтровать только целочисленные значения ввода
                    // Например, если я введу "0" как номер операции б все будет хорошоб а если "k" то произойдет обвал
                    // Хотя, значение choice будет 0  и int
                  //  auto t = typeid(choice).name();
            
                  //  std::cout << "\n\t Your choice is: " << choice << "\t"  << t << std::endl;
                    if (((choice < 1) || (choice > 5))) 
                    {
                        
                        std::cout << "\n\t Please, enter correct choice!" << std::endl;
                      
                    }
                }
               
                if (choice == 1)
                {
                    std::cout << "\n num1 + num2 =" << add() << std::endl;

                }
                else if (choice == 3)
                {
                    std::cout << "\n num1 * num2 =" << multiply() << std::endl;
                }
                else if (choice == 2) {
                    std::cout << "\n num1 - num2 =" << substruct_1_2() << std::endl;
                    std::cout << "\n num2 - num1 =" << substruct_2_1() << std::endl;
                }
                else if (choice == 4) {
                    std::cout << "\n num1 / num2 =" << divide_1_2() << std::endl;
                    std::cout << "\n num2 / num1 =" << divide_2_1() << std::endl;
                }
                else if (choice == 5) {
                    std::cout << "\n num1 ^ num2 = " << exponentiation() << std::endl;
                }
                
                    
              
                
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

