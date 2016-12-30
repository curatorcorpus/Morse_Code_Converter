#include <iostream>
#include <string>

#include <stdlib.h>

#include "Morse_Interface.hpp"

#define HELP "help"
#define QUIT_FLAG "quit"

std::string get_char(std::string input, Morse_Interface morse) {
  std::string morse_code = "";
  
  for(int i = 0; i < input.size(); i++) {
    morse_code += morse.get_morse(input.at(i));
    morse_code += " ";
  }

  return morse_code;
}

void help_options() {
  std::cout << "type 'help' to print help options" << std::endl;
  std::cout << "type 'quit' to end program" << std::endl;
  std::cout << "==============================================="
	    << std::endl
	    << std::endl;
}

int main(void) {
  std::string line = "";
  
  help_options();
  
  Morse_Interface morse;

  while(line != QUIT_FLAG) {
    std::cout << "Enter sentence to convert: " << std::endl;
    std::getline(std::cin, line);

    if(line == HELP) {
      help_options();
      continue;
    }
    
    std::cout << std::endl;

    std::cout << "Morse Code: " << get_char(line, morse)
	      << std::endl
	      << std::endl;
  }
    
  return EXIT_SUCCESS;
}
