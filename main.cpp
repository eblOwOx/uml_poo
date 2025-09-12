/*
 * Point d'entrée du programme
 * Permet de tester les différentes classes d'objets
 *
 **/
#include <iostream>
#include "header/Moto.h"
#include "header/Moteur.h"
#include "header/Thermique.h"
#include "header/Electrique.h"

int main () {
  Moto moto1;
  moto1.setPoids(50);
  
  Moteur moteur1;
  moteur1.setPuissance(49);

  Electrique electrique1;
  electrique1.setTensionMax(150);
  
  Thermique thermique1;
  thermique1.setCylindree(200);

  std::cout << "Poids de la moto : " << moto1.getPoids() << "." << std::endl;
  std::cout << "Puissance du moteur : " << moteur1.getPuissance() << "." << std::endl;
  std::cout << "Tension max du moteur éléctrique : " << electrique1.getTensionMax() << "." << std::endl;
  std::cout << "Cylindree du moteur : " << thermique1.getCylindree() << "." << std::endl;

  return 0;
}
