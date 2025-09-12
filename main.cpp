/*
 * Point d'entrée du programme
 * Permet de tester les différentes classes d'objets
 *
 **/
#include <iostream>
#include "header/Moto.h"
#include "header/Electrique.h"
#include "header/Thermique.h"

int main () {
  Moto moto1;
  moto1.setPoids(50);

  Electrique electrique1;
  electrique1.setTensionMax(150);
  
  Thermique thermique1;
  thermique1.setCylindree(200);

  std::cout << "Poids de la moto : " << moto1.getPoids() << "." << std::endl;
  std::cout << "Tension max du moteur éléctrique : " << electrique1.getTensionMax() << "." << std::endl;
  std::cout << "Cylindree du moteur : " << thermique1.getCylindree() << "." << std::endl;

  return 0;
}
