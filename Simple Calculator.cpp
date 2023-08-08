#include <iostream>

int main () {
    int oprand1 ;
    int oprand2 ;
    int opration ;
    float result ;
    bool valid ;

    std::cout << "enter first number : " << std::ends;
    std::cin >> oprand1;

    std::cout <<"enter second number : "<< std::ends;
    std::cin >> oprand2;

    do
    { 
    std::cout << "enter the operation numer (1=divide,2=multi,3=addition,4=substraction): " <<std::ends;
    std::cin >> opration;

    switch (opration)
    {
    case 1:
        result = oprand1 / oprand2;
        valid = true;
        break;

    case 2:
        result = oprand1 * oprand2;
        valid = true;
        break;

    case 3:
        result = oprand1 + oprand2;
        valid = true;
        break;

    case 4:
        result = oprand1 - oprand2;
        valid = true;
        break;
    
    default:
        std::cout << "please select number from 1 to 4." <<std::endl;
        valid = false;
        break;
    }

    } while ( valid == false );

    std::cout << "The result is : " << result << std::ends;

    return 0 ;
}