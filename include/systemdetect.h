#ifndef __SYSTEMDETECT_H_INCLUDE__
#define __SYSTEMDETECT_H_INCLUDE__

#include <gbdk/platform.h>
#include <stdint.h>

#include "globals.h"

BANKREF_EXTERN(module_detect_system)

extern uint8_t _is_SUPER, _is_COLOR, _is_ADVANCE;
extern uint8_t _is_CPU_FAST;

uint8_t CPU_FAST() BANKED;
void CPU_SLOW() BANKED;

uint8_t INIT_module_detect_system() BANKED;

#endif