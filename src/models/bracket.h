#ifndef BRACKET_H
#define BRACKET_H

#include "byte-model.h"

#include <unordered_map>
#include <vector>
#include <utility>

class Bracket : public ByteModel {
 public:
  Bracket(const unsigned int& bit_context);
  void ByteUpdate();

 private:
  std::unordered_map<unsigned char, unsigned char> brackets_;
  unsigned int distance_limit_, stack_limit_;
  std::vector<unsigned int> active_, distance_;
  const unsigned int& byte_;
  std::vector<std::vector<std::pair<double, double>>> stats_;
};

#endif