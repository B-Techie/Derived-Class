#include <iostream>
#include <string>
#include <sstream>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::stringstream;

#ifndef ITEM_H
#define ITEM_H

class Item {
  // Private member variables
 private:
  string name_;
  unsigned int value_;
  // public functions
 public:
  // Overloaded Constructor Default values
  Item(string name = "item", unsigned int value = 0);
  // Virtual destructor Does nothing
  virtual ~Item();
  // Accessors
  string name() const;
  unsigned int value() const;
  // Mutators
  void set_name(const string& name);
  void set_value(unsigned int value);
  // Manipulators
  string ToString();
};

#endif  // ITEM
