#ifndef BFLOAT16_H
#define BFLOAT16_H
 
#include <stdint.h>
 
namespace bfloat16
{
 
union float32_converter {
    uint32_t bit32;
    float f;
};
 
float bfloat16_to_float32(uint16_t bfloat_value);
 
uint16_t float32_to_bfloat16(float float_value);
 
} // namespace bfloat16
 
#endif