#ifndef _TULOSTUS_HPP
#define _TULOSTUS_HPP

#include <iostream>
#include <stdlib.h>

void tulosta(auto x) {
  std::cout << x << std::endl << std::flush;
}

void tyhjenna() {
  std::system("clear");
}

#endif /* _TULOSTUS_HPP */
