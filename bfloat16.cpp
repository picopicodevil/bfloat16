#include "bfloat16.h"
#include <stdint.h>
 
namespace bfloat16
{
 
float bfloat16_to_float32(uint16_t bfloat_value)
{
    union float32_converter converter;
    converter.bit32 = (bfloat_value << 16) & 0xFFFF0000;
 
    return converter.f;
}
 
uint16_t float32_to_bfloat16(float float_value)
{
    union float32_converter converter;
    converter.f = float_value;
 
    return (converter.bit32 >> 16) & 0xFFFF;
}
 
} // namespace bfloat16