#include "s21_string.h"

char *s21_strcat(char *dest, const char *src) {
  s21_size_t len = s21_strlen(dest);
  s21_size_t i = 0;
  for (i = 0; src[i] != '\0'; i++) {
    dest[i + len] = src[i];
  }
  dest[i + len] = '\0';
  return dest;
}