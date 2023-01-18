#include <iostream>

int main() {

  int i = 0;
  int square = 0;
    
  while (i < 10)
  {

    //Squaring the int i
    square = i * i;

    //Printing the square
    std::cout << i << "   " << square << "\n";

    //Iterate int i
    i++;
  }


}
