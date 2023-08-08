#include <iostream>
#include <cstdlib>

int main() {
    int gssnum ;
    int chance = 10;
    int min = 1;
    int max = 100;
    int srtnum = std::rand() % (max - min + 1) + min;

    std::cout << "i have decided a number as a secret number and you have to guess it now. range is 1 to 100" << std::endl;
    std::cout << "you have only 10 chances" << std::endl;

    for (; chance > 0 ; chance--)
        { 
        std::cout << "Guess the number: " << std::ends;
        std::cin >> gssnum;

        if ( srtnum == gssnum ){
            std::cout << "correct" << std::endl; break;
        }

        else if ( gssnum > srtnum ){
            std::cout << "you guessed higher, secret number is lower than you guessed" << std::endl;
            std::cout << "chances left :" << chance - 1 << std::endl;
        }

        else if ( gssnum < srtnum ){
            std::cout << "you guessed lower, secret number is higher than you guessed" << std::endl;
            std::cout << "chances left :" << chance - 1 << std::endl;
        }

    }
      if ( chance == 0 )
      {
        std::cout << "you failded to guess the right number." << std::endl;
      }
      else
      {
        std::cout << "congratulations, you guessed number succesfully" << std::endl;
      }
      
      
    return 0;
}