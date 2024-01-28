///////////////////////////////////////////////////////////////////////////////////////////////////
//// FILE -> BOARD
///////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
#include <inttypes.h>
#include "sam.h"

struct PIN_DESCRIPTOR {
  const uint8_t number;
  const uint8_t group;
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//// SECTION -> PIN REFERENCE
///////////////////////////////////////////////////////////////////////////////////////////////////

const PIN_DESCRIPTOR PIN_REF[] = {
  {1, 1}
}; 
const int PIN_COUNT = sizeof(PIN_REF) / sizeof(PIN_REF[0]);

///////////////////////////////////////////////////////////////////////////////////////////////////
//// SECTION -> MISC FUNCTIONS
///////////////////////////////////////////////////////////////////////////////////////////////////

const PIN_DESCRIPTOR *get_pin(int pinNum) {
  for (int i = 0; i < PIN_COUNT; i++) {
    if (PIN_REF[i].number == pinNum) {
      return &PIN_REF[i];
    } else if (i >= PIN_COUNT - 1) {
      return nullptr;
    }
  }
}

bool valid_pin(int pinNum) {
  return get_pin != nullptr;
} 