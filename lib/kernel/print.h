#ifndef __LIB_KERNEL_PRINT_H
#define __LIB_KERNEL_PRINT_H
#include "stdint.h"
void put_char(uint8_t char_asci);
void put_str(char* message);
void put_int(uint32_t num);	 // 以16进制打印
void set_cursor(uint32_t cursor_pos);
void cls_screen(void);
void test_gui(void);
void put_line(uint32_t start, uint32_t end, uint32_t color);
#endif

