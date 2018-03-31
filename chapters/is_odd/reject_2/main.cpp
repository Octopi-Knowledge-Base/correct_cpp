//std::exception caught by value

#include <string>
#include <iostream>

int main(int argc, char* argv[]) 
{
  if (argc == 1) return 1;
  try
  {
    std::cout << std::boolalpha << (std::stoi(argv[1]) % 2 == 1) << '\n';
  }
  catch (const std::exception) //caught by value
  {
    return 1;
  }
}