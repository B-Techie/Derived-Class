#include "food_item.h"

// Overloaded derived Constructor
// @param name
// @param value
// @param calories
// @param unit_of_measure
// @param unit
// Constructor call to class Item
FoodItem::FoodItem(string name, unsigned int value, unsigned int calories,
  string unit_of_measure, double units)
  : Item(name, value),
  calories_(calories),
  unit_of_measure_(unit_of_measure),
  units_(units) {
}
// Destructor
FoodItem::~FoodItem() {}
// Accessor for calories_ variable
unsigned int FoodItem::calories() const {
  return calories_;
}
// Mutator for calories_ variable
// @param unsigned int calories
void FoodItem::set_calories(unsigned int calories) {
  calories_ = calories;
}
// Accessor for unit_of_measure_ variable
string FoodItem::unit_of_measure() const {
  return unit_of_measure_;
}
// Mutator for unit_of_measure_ variable
// @param const string &value
void FoodItem::set_unit_of_measure(const string& value) {
  unit_of_measure_ = value;
}
// Accessor for units_ variable
double FoodItem::units() const {
  return units_;
}
// Mutator for units_ variable
// @param double units
void FoodItem::set_units(double units) {
  units_ = units;
}
// Manupulator function for derived and class variables
// Format name, $value, units, unit_of_measure, calories
string FoodItem::ToString() {
  stringstream ss;
  ss.setf(std::ios::fixed|std::ios::showpoint);
  ss.precision(2);
  ss << name() << ", $" << value() << ", " <<
    units() << " " << unit_of_measure()  << ", " << calories() << " calories";
  return ss.str();
}
