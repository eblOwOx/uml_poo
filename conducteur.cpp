/***********************************************************************//**
* \file   conducteur.cpp
* \brief  Definition de la classe conducteur
*
* \author Maël
* \version 0.1
* \date   September 2025
*
* Programme Cpp permettant de creer des objets pour décrire les conducteurs
**************************************************************************/

#include "Conducteur.h"

using namespace std;

Conducteur::Conducteur() {
	this->nom = "null";
	this->prenom = "null";
	this->anneeNaissance = 0;
}


/**
 * @brief Constructeur de la classe Conducteur
 */
Conducteur::Conducteur(const std::string& n, const std::string& p, int an)
    : nom(n), prenom(p), anneeNaissance(an) {
}

/**
 * @brief Destructeur de la classe Conducteur
 */
Conducteur::~Conducteur() {
    // On ne supprime pas les motos ici car elles peuvent être partagées entre plusieurs conducteurs
	cout << "Destruction du conducteur " << this->prenom << " " << this->nom << " " << this->anneeNaissance << "." << endl;
}

