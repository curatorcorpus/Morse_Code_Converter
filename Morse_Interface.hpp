#include <map>
#include <string>

class Morse_Interface {
  
public:
  Morse_Interface();
  ~Morse_Interface();
  
  std::string get_morse(char key);
  char get_key(std::string morse_code);

private:
  static std::map<char, std::string> morse_map;
  void create_morse_table();
  
};

