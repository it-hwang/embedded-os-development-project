#ifndef LIB_STDIO_H
#define LIB_STDIO_H

#include "stdarg.h"

uint32_t putstr(const char* s);
uint32_t debug_printf(const char* format, ...);
uint32_t vsprintf(char* buf, const char* format, va_list arg);

#endif /* LIB_STDIO_H */
