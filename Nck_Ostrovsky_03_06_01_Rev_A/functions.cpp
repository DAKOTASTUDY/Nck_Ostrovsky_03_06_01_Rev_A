#include <iostream>
#include<math.h>
#include "header.h"



    double num1;
    double num2;

   
    bool set_num1(double nn) {
        if (nn != 0) { num1 = nn; return (true); }
        else { return (false); }
    }
    bool set_num2(double mm) {
        if (mm != 0) { num2 = mm; return (true); }
        else { return (false); }
    }
    double get_num1() { return num1; }
    double get_num2() { return num2; }
    double add()
    {
        return (num2 + num1);
    }
    double multiply()
    {
        return (num1 * num2);
    }
    double substruct_1_2()
    {
        return (num1 - num2);
    }
    double substruct_2_1()
    {
        return (num2 - num1);
    }
    double divide_1_2()
    {
        return (num1 / num2);
    }
    double divide_2_1()
    {
        return (num2 / num1);
    }
    double exponentiation()
    {
    return pow(num1 , num2);
    }

   