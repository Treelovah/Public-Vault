#include <iostream>
#include "date_calculate.h"
//Main
/* keeping your main clean is great practice for XXXXXX^xxxxxx amount of reasons.
*/
int main() {
  // programName = argv[0]; you're not using argv or argc.
  // (void)argc; not needed 
  std::string line;
  while(getline(cin, line)) parseInput(line);
  return 0;
}
