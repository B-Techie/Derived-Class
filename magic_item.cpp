#include "magic_item.h"

// Overloaded derived Constructor
// @param name
// @param value
// @param desciption
// @param mana_required
// Constructor call to class Item
MagicItem::MagicItem(string name, unsigned int value, string description,
  unsigned int mana_required)
  : Item(name, value),
    description_(description),
    mana_required_(mana_required) {
}
// Destructor
MagicItem::~MagicItem() {}
// Accessor for description_ variable
string MagicItem::description() const {
  return description_;
}
// Mutator for description_ variable
// @param const string &description
void MagicItem::set_description(const string& description) {
  description_ = description;
}
// Accessor for mana_required_ variable
unsigned int MagicItem::mana_required() const {
  return mana_required_;
}
// Mutator for mana_required_ variable
// @param unsigned int mana_required
void MagicItem::set_mana_required(unsigned int mana_required) {
  mana_required_ = mana_required;
}
// Manipulator function for derived and class variabls
// Format name, $value, description, mana_required
string MagicItem::ToString() {
  stringstream ss;
  ss.setf(std::ios::fixed|std::ios::showpoint);
  ss.precision(2);
  ss << name() << ", $" << value() << ", " <<
    description() << ", requires " << mana_required() << " mana";
  return ss.str();
}
