#include "item.h"

// Overloaded Constructor
// Default param "item", 0
// @param string name
// @param unsigned int value
Item::Item(string name, unsigned int value)
  : name_(name),
    value_(value) {
}
// Destructor
Item::~Item() {}
// Accessor for name_ variable
string Item::name() const {
  return name_;
}
// Mutator for name_ variable
// a const reference of value passed
// @param name
void Item::set_name(const string& name) {
  name_ = name;
}
// Accessor for value_ variable
unsigned int Item::value() const {
  return value_;
}
// Mutator for value_ variable
// @param value
void Item::set_value(unsigned int value) {
  value_ = value;
}
// Manupulator function for class variables
// Format name, $value
string Item::ToString() {
  stringstream ss;
  ss.setf(std::ios::fixed|std::ios::showpoint);
  ss.precision(2);
  ss << name() << ", $" << value();
  return ss.str();
}
