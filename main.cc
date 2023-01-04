#include <iostream>
#include <string>

#include "star.h"

int main() {
  int num = 0;
  std::cout << "How many stars? ";
  std::cin >> num;

  int count = 0;
  while (count < num)
    {
      std::string new_star;
      double new_radius;
      std::cout << "Enter star " << count << "'s name: ";
      std::cin >> new_star;
      std::cout << "What is the solar radius? ";
      std::cin >> new_radius;
      Star s1(new_star, new_radius);
      std::cout << "Created star " << s1.GetName() << std::endl;
      count++;
    }
  
  
  return 0;
}
