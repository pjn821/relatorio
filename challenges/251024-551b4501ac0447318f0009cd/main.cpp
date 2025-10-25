//#include <string>
#include <iostream>
std::string boolean_to_string(bool value){
  if (value == true)
  {
    return "true";
  }else{
    return "false";
  }
}
int main() {
  std::cout << boolean_to_string(true);
}
