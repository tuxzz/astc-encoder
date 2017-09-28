#ifndef ASTC_H
#define ASTC_H

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

#include <stdint.h>

#ifdef BUILDING_DLL
  #define ASTC_EXPORT __declspec(dllexport)
#else
  #define ASTC_EXPORT
#endif // BUILDING_DLL

ASTC_EXPORT int astc_main(int argc, char **argv, int width, int height, int stride, const char *format, void *pixels, int *out_width, int *out_height, int *out_size, void **out_data);
ASTC_EXPORT uint16_t astc_float_to_half(float f32);
ASTC_EXPORT float astc_half_to_float(uint16_t f16);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // ASTC_H