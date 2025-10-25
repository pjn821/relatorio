//#include <string>
#include <iostream>
// responder com valor do tipo string
// std::string boolean_to_string_e(bool value){
//   if (value = true)
//   {
//     // responder com "true" 
//     return "string";
//   } 

//   if (value = false)
//   {
//     // responder com "false" 
//     return "string";
//   }
// }

// imprimir "true" quando e true, "false" quando e false
// std::string boolean_to_string_f(bool value){
//   if (value = true)
//   {
//     // responder com "true" 
//     return "true";
//   } 

//   if (value = false)
//   {
//     // responder com "false" 
//     return "false";
//   }
// }

// syntax de comparaco
std::string boolean_to_string(bool value){
    // value <- true -> "true"
    // value <- false -> "false"
  if (value == true)
  {
    // responder com "true" 
    return "true";
  } 

  if (value == false)
  {
    // responder com "false" 
    return "false";
  }
}
int main() {
  std::cout << boolean_to_string(true);
//   std::cout << age;
}
