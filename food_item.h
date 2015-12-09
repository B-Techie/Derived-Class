#include "item.h"

#ifndef FOOD_ITEM_H
#define FOOD_ITEM_H

class FoodItem : public Item {
  // private member variables
 private:
  unsigned int calories_;
  string unit_of_measure_;
  double units_;
// Public functions
 public:
  // Overloaded Constructor default values
  FoodItem(string name = "fooditem", unsigned int value = 0,
    unsigned int calories = 0, string unit_of_measure = "nounits",
    double units = 0);
  // Virtual Destructor
  virtual ~FoodItem();
  // Mutators
  void set_calories(unsigned int calories);
  void set_unit_of_measure(const string& value);
  void set_units(double units);
  // Accessors
  string unit_of_measure() const;
  unsigned int calories() const;
  double units() const;
  // Manipulators
  string ToString();
};

#endif  // food_item
