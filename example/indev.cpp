#include "dwarf/dwarf.hpp"
#include "fmt/format.h"

int main(int argc, char* argv[]) {
  fmt::print("Some math!\n2 + 2 = {}\n", add(2, 2));
}