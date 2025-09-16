/*****************************************************************//**
* \file   Moteur.cpp
* \brief  Definition de la classe Moteur
*
* \author Gagny
* \version 0.1
* \date   September 2025
*
* Programme Cpp permettant de creer des objets pour décrire un moteur
*********************************************************************/
#include "../header/Moteur.h"
#include <iostream>

using namespace std;


/**
 * \brief Constructeur par default
 * \li Puissance du moteur = 0 
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

