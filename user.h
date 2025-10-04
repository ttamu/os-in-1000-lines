#pragma once
#include "common.h"

void putchar(char ch);
int getchar(void);
int readfile(const char *filename, char *buf, int len);
int writefile(const char *filename, const char *buf, int len);
__attribute__((noreturn)) void exit(void);