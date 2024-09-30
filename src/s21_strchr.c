#include "s21_string.h"

char *s21_strchr(const char *str, int s) {
  const char *rtn = S21_NULL;
  while (*str != '\0' && *str != (char)s) {
    str++;
  }
  if (*str == s) rtn = str;
  return (char *)rtn;
}