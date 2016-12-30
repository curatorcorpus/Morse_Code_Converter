#include <iostream>
#include <map>
#include <string>

#include "Morse_Interface.hpp"

std::map<char, std::string> Morse_Interface::morse_map =
  std::map<char, std::string>();

Morse_Interface::Morse_Interface() {
  morse_map[' '] = " ";
  morse_map['a'] = "*-";
  morse_map['b'] = "-***";
  morse_map['c'] = "-*-*";
  morse_map['d'] = "-**";
  morse_map['e'] = "*";
  morse_map['f'] = "**-*";
  morse_map['g'] = "--*";
  morse_map['h'] = "****";
  morse_map['i'] = "**";
  morse_map['j'] = "*---";
  morse_map['k'] = "-*-";
  morse_map['l'] = "*-**";
  morse_map['m'] = "--";
  morse_map['n'] = "-*";
  morse_map['o'] = "---";
  morse_map['p'] = "*--*";
  morse_map['q'] = "--*-";
  morse_map['r'] = "*-*";
  morse_map['s'] = "***";
  morse_map['t'] = "-";
  morse_map['u'] = "**-";
  morse_map['v'] = "***-";
  morse_map['w'] = "*--";
  morse_map['x'] = "-**-";
  morse_map['y'] = "-*--";
  morse_map['z'] = "--**";

  morse_map['1'] = "*----";
  morse_map['2'] = "**----";
  morse_map['3'] = "***--";
  morse_map['4'] = "****-";
  morse_map['5'] = "*****";
  morse_map['6'] = "-****";
  morse_map['7'] = "--***";
  morse_map['8'] = "---**";
  morse_map['9'] = "----*";
  morse_map['0'] = "-----";
}

Morse_Interface::~Morse_Interface() {
}

std::string Morse_Interface::get_morse(char key) {
  return morse_map[key];
}

char Morse_Interface::get_key(std::string morse) {
  return 'a';
}
