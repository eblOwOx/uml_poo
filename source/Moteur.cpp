#include "../header/Moteur.h"
#include <iostream>

using namespace std;


/**
 * \brief Constructeur par default
 * \li Masse de la moto = 0
 * \li Moteur =
 *
 */
Moteur::Moteur(){

    this->Puissance = 0;
}

Moteur::Moteur(int Puissance) {
    this->Puissance = Puissance;
}

Moteur::~Moteur() {
    cout << "Destruction du moteur : " << this->Puissance << "." << endl;
}

int Moteur::getPuissance()
{
    return this->Puissance;
}

void Moteur::setPuissance(int nouveauPuissance)
{
    this->Puissance = nouveauPuissance;
}

