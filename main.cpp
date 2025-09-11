/*
 * Point d'entrée du programme
 * Permet de tester les différentes classes d'objets
 * NE PAS C
 * */
#include <iostream>
#include "source/Moto.cpp"
//#include "source/Electrique.cpp"

int main () {
  Moto moto1;
  moto1.setPoids(50);

  std::cout << "Poids de la moto : " << moto1.getPoids() << "." << endl;
  return 0;
}
