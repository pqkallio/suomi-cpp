#ifndef _TULOSTUS_HPP
#define _TULOSTUS_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

#define MUSTA 0
#define PUNAINEN 1
#define VIHREA 2
#define KELTAINEN 3
#define SININEN 4
#define LILA 5
#define TURKOOSI 6
#define VALKOINEN 7

void tulosta(char* x) {
  std::cout << x << std::endl << std::flush;
}

void tulosta(std::string x) {
  std::cout << x << std::endl << std::flush;
}

void tulosta(bool x) {
  std::cout << x << std::endl << std::flush;
}

void tulosta(double x) {
  std::cout << x << std::endl << std::flush;
}

void tulosta(int x) {
  std::cout << x << std::endl << std::flush;
}

void tyhjenna() {
  std::system("clear");
}

void rivinvaihto() {
  std::cout << std::endl << std::flush;
}

class Tulostin {
private:
  int vari;
  int taustavari;
  int valiaikainenVari;
  int valiaikainenTaustaVari;

public:
  Tulostin() {
    this->vari = 30 + VALKOINEN;
    this->taustavari = 40 + MUSTA;
  }

  void asetaVari(int vari) {
    this->vari = 30 + vari;
  }

  void asetaTaustavari(int vari) {
    this->taustavari = 40 + vari;
  }

  Tulostin* varilla(int vari) {
    this->valiaikainenVari = 30 + vari;

    return this;
  }

  Tulostin* taustavarilla(int vari) {
    this->valiaikainenTaustaVari = 40 + vari;

    return this;
  }

  Tulostin* tulosta(auto x) {
    int vari = this->valiaikainenVari ? this->valiaikainenVari : this->vari;
    int taustavari = this->valiaikainenTaustaVari ? this->valiaikainenTaustaVari : this->taustavari;

    this->valiaikainenVari = 0;
    this->valiaikainenTaustaVari = 0;

    std::cout << "\033[" << vari << ";" << taustavari << "m" << x;

    return this;
  }
};

#endif /* _TULOSTUS_HPP */
