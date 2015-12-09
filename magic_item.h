#include "item.h"

#ifndef MAGIC_ITEM_H
#define MAGIC_ITEM_H

class MagicItem : public Item {
  // private member variables
 private:
  string description_;
  unsigned int mana_required_;
// public member functions
 public:
  // Overloaded Constructor default values
  MagicItem(string name = "magicitem", unsigned int value = 0,
    string description = "no description", unsigned int mana_required = 0);
  // Destructor
  virtual ~MagicItem();
  // Accessors
  string description() const;
  unsigned int mana_required() const;
  // Mutators
  void set_description(const string& description);
  void set_mana_required(unsigned int mana_required);
  // Manipulators
  string ToString();
};

#endif  // MAGIC_ITEM
