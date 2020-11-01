#ifndef _LUKU_HPP
#define _LUKU_HPP

#include <iostream>
#include <stdlib.h>
#include <string>

void read(char* x) {
  std::cin >> *x;
}

void read(std::string* x) {
  std::cin >> *x;
}

void read(int* x) {
  std::cin >> *x;
}

void read(double* x) {
  std::cin >> *x;
}

#define lue(x) (read(&x))

#endif /* _LUKU_HPP */
