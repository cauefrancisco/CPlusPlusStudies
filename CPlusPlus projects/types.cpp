#include <iostream>
#include <vector>

// typedef = reserved keyword used to create an additional name
//           (alias) for another data type.
//           New identifier for an existing type
//           Helps with readability and reduces typos

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;

using word_t = std::string;

int main()
{
  pairlist_t pairlist;
  text_t name = "Caue";
  word_t names = "Caue Francisco";

  // typedef been heavily replaced by `using` (work better with templates)

  return 0;
}