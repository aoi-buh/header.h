#ifndef HEADER_H

#include <stdio.h>
#include <vec/vec.h>

#define u8 uint8_t
#define u16 uint16_t
#define u32 uint32_t
#define u64 uint64_t

#define i8 int8_t
#define i16 int16_t
#define i32 int32_t
#define i64 int64_t


#define perr(fmt, ...) fprintf(stderr, fmt, ##__VA_ARGS__)
#define unwrap(ptr) ((ptr) ? (ptr) : (perr("unwrap() failed at %s:%d\n", __FILE__, __LINE__), exit(EXIT_FAILURE), NULL))
#define expect(ptr, call) ((ptr) ? (ptr) : (call, exit(EXIT_FAILURE), NULL))
#define arr_len(arr) (sizeof(arr) / sizeof(*arr))
#define fori(i, max) for (size_t i = 0; i < max; i++)
#define foreach(c, p) for (typeof(*p) *c = p; c < p+arr_len(p); c++)
#define panic(msg) (perror(msg), exit(EXIT_FAILURE))
#define warning(fmt, ...) perr("\033[31;1mWARNING\033[0m: " fmt, ##__VA_ARGS__)

#endif
